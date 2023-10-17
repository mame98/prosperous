#ifndef PROSPEROUS_CONSOLE_HPP
#define PROSPEROUS_CONSOLE_HPP

#include <ostream>
#include <iostream>
#include <prosperous/Colors.hpp>
#include <prosperous/RichText.hpp>

namespace prosperous {

    struct Size {
        uint32_t height = 24;
        uint32_t width = 80;
    };

    class Console {

    public:
        explicit Console(std::ostream& output) : output(output) {
            autodetect_terminal_features();
            autodetect_terminal_size();
        }
        Console() : Console(std::cout) {}

        void autodetect_terminal_features();
        void set_terminal_color_mode(ColorMode mode);
        [[nodiscard]] ColorMode get_terminal_color_mode() const;

        void print(const RichText& rich_text);
        void print(std::string string);

        [[nodiscard]] bool get_auto_resize() const;
        void set_auto_resize(bool active);
        void autodetect_terminal_size();

        void set_size(Size new_size);
        [[nodiscard]] Size get_size() const;
        [[nodiscard]] uint32_t get_width() const;
        [[nodiscard]] uint32_t get_height() const;

    private:
        ColorMode color_mode = ColorMode::MONOCHROME;
        std::ostream& output;
        Size size{};
        bool auto_resize = true;
    };

} // prosperous

#endif //PROSPEROUS_CONSOLE_HPP
