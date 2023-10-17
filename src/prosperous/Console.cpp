#include "Console.hpp"

#include <unistd.h>
#include <cstring>
#include <algorithm>
#include <utility>

namespace prosperous {

    namespace {
        bool is_terminal(std::ostream& stream) {
            if(stream.rdbuf() == std::cout.rdbuf()) {
                return isatty(STDOUT_FILENO);
            } else if( stream.rdbuf() == std::cerr.rdbuf()) {
                return isatty(STDERR_FILENO);
            }

            return false;
        }
    }

    void Console::autodetect_terminal_features() {

        constexpr std::array<const char*, 1> terminals_with_8_colors{"xterm"};
        constexpr std::array<const char*, 4> terminals_with_16_colors{"xterm", "ansi", "cygwin", "linux"};
        constexpr std::array<const char*, 2> terminals_with_255_colors{"xterm-256", "xterm-256color"};

        if(is_terminal(output))
        {
            auto color_term = getenv("COLORTERM");
            if(color_term) {
                if(std::strcmp(color_term, "24bit") == 0 || std::strcmp(color_term, "truecolor") == 0) {
                    color_mode = ColorMode::TRUE_COLOR_24BIT;
                    return;
                }
            }

            auto terminal_type = getenv("TERM");
            if(terminal_type) {
               if(std::any_of(terminals_with_255_colors.begin(), terminals_with_255_colors.end(), [terminal_type](const char* check) {
                   return std::strcmp(check, terminal_type) == 0;
               })) {
                   color_mode = ColorMode::VT100_256_COLORS;
                   return;
               }

                if(std::any_of(terminals_with_16_colors.begin(), terminals_with_16_colors.end(), [terminal_type](const char* check) {
                    return std::strcmp(check, terminal_type) == 0;
                })) {
                    color_mode = ColorMode::VT100_16_COLORS;
                    return;
                }

                if(std::any_of(terminals_with_8_colors.begin(), terminals_with_8_colors.end(), [terminal_type](const char* check) {
                    return std::strcmp(check, terminal_type) == 0;
                })) {
                    color_mode = ColorMode::VT100_8_COLORS;
                    return;
                }
            }
        }
        color_mode = ColorMode::MONOCHROME;
    }

    void Console::set_terminal_color_mode(ColorMode mode) {
        color_mode = mode;
    }

    ColorMode Console::get_terminal_color_mode() const {
        return color_mode;
    }

    void Console::print(const RichText& rich_text) {
        auto formatted_text = rich_text.render(color_mode);
        output << formatted_text << "\n";
    }

    void Console::print(std::string string) {
        print(RichText{std::move(string)});
    }

} // prosperous