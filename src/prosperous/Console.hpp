#ifndef PROSPEROUS_CONSOLE_HPP
#define PROSPEROUS_CONSOLE_HPP

#include <ostream>
#include <iostream>
#include <prosperous/Colors.hpp>
#include <prosperous/RichText.hpp>

namespace prosperous {


    class Console {

    public:
        explicit Console(std::ostream& output) : output(output) {
            autodetect_terminal_features();
        }
        Console() : Console(std::cout) {}

        void autodetect_terminal_features();
        void set_terminal_color_mode(ColorMode mode);
        [[nodiscard]] ColorMode get_terminal_color_mode() const;

        void print(const RichText& rich_text);
        void print(std::string string);

    private:
        ColorMode color_mode = ColorMode::MONOCHROME;
        std::ostream& output;
    };

} // prosperous

#endif //PROSPEROUS_CONSOLE_HPP
