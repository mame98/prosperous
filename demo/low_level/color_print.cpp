#include <prosperous/Colors.hpp>

#include <iostream>

void print_color_view(prosperous::ColorMode mode) {
    for(int i = 0; i < 16; ++i) {
        for(int j = 0; j < 16; ++j) {
            std::cout << prosperous::colorize_string("█", mode, prosperous::colors[i*16+j], prosperous::NamedColors::Black);
        }
        std::cout << "\n";
    }

    std::cout << "\n";
}

int main() {
    for(int i = 0; i < 16; ++i) {
        std::cout << "color-code: " << i << "\n";
        std::cout << prosperous::colorize_string("My Text (monochrome)!", prosperous::ColorMode::MONOCHROME, prosperous::colors[i], prosperous::NamedColors::Black) << "\n";
        std::cout << prosperous::colorize_string("My Text (VT100-8)!", prosperous::ColorMode::VT100_8_COLORS, prosperous::colors[i], prosperous::NamedColors::Black) << "\n";
        std::cout << prosperous::colorize_string("My Text (VT100-16)!", prosperous::ColorMode::VT100_16_COLORS, prosperous::colors[i], prosperous::NamedColors::Black) << "\n";
        std::cout << prosperous::colorize_string("My Text (VT100-256)!", prosperous::ColorMode::VT100_256_COLORS, prosperous::colors[i], prosperous::NamedColors::Black) << "\n";
        std::cout << "\n";
    }

    std::cout << "\n\n";

    std::cout << "Monochrome:\n";
    print_color_view(prosperous::ColorMode::MONOCHROME);

    std::cout << "8 Colors:\n";
    print_color_view(prosperous::ColorMode::VT100_8_COLORS);

    std::cout << "16 Colors:\n";
    print_color_view(prosperous::ColorMode::VT100_16_COLORS);

    std::cout << "255 Colors:\n";
    print_color_view(prosperous::ColorMode::VT100_256_COLORS);

    std::cout << "True Colors:\n";
    print_color_view(prosperous::ColorMode::TRUE_COLOR_24BIT);

    std::cout << "\n\n";

    for(int i = 0; i < 32; ++i) {
        for(int j = 0; j < 80; ++j) {

            prosperous::Color fg{"", {(uint8_t)(255/32*i), (uint8_t)(255/80*j), 54}, 0};
            std::cout << prosperous::colorize_string("█", prosperous::ColorMode::TRUE_COLOR_24BIT, fg, prosperous::NamedColors::Black);
        }
        std::cout << "\n";
    }

}