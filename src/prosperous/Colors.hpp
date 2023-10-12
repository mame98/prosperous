#ifndef PROSPEROUS_COLORS_HPP
#define PROSPEROUS_COLORS_HPP

#include <array>
#include <cstdint>
#include <string>

namespace prosperous {

    enum class ColorMode {
        MONOCHROME,
        VT100_8_COLORS,
        VT100_16_COLORS,
        VT100_256_COLORS,
        TRUE_COLOR_24BIT
    };

    struct RGBValue {
        uint8_t red;
        uint8_t green;
        uint8_t blue;
    };

    struct Color {
        const char* name;
        RGBValue rgb;
        uint8_t vt100_color_code;
    };

    extern const std::array<Color, 256> colors;

    std::string colorize_string(std::string value, ColorMode color_mode, Color foreground, Color background);

    namespace NamedColors {
        extern const Color Black;
        extern const Color Red;
        extern const Color Green;
        extern const Color Yellow;
        extern const Color Blue;
        extern const Color Magenta;
        extern const Color Cyan;
        extern const Color White;

        extern const Color BrightBlack;
        extern const Color BrightRed;
        extern const Color BrightGreen;
        extern const Color BrightYellow;
        extern const Color BrightBlue;
        extern const Color BrightMagenta;
        extern const Color BrightCyan;
        extern const Color BrightWhite;

        extern const Color Gray;
    }

}

#endif //PROSPEROUS_COLORS_HPP
