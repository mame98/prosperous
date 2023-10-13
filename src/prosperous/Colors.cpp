#include "Colors.hpp"

#include <cstdint>
#include <exception>
#include <stdexcept>

namespace prosperous {

    const std::array<Color, 256> colors = {
            Color{"black", {0,0,0}, 0},
            Color{"red", {170,0,0}, 1},
            Color{"green", {0,170,0}, 2},
            Color{"yellow", {170,85,0}, 3},
            Color{"blue", {0,0,170}, 4},
            Color{"magenta", {170,0,170}, 5},
            Color{"cyan", {0,170,170}, 6},
            Color{"white", {170,170,170}, 7},
            Color{"gray", {85,85,85}, 8},
            Color{"bright-red", {255,85,85}, 9},
            Color{"bright-green", {85,255,85}, 10},
            Color{"bright-yellow", {255,255,85}, 11},
            Color{"bright-blue", {85,85,255}, 12},
            Color{"bright-magenta", {255,85,255}, 13},
            Color{"bright-cyan", {85,255,255}, 14},
            Color{"bright-white", {255,255,255}, 15},

            Color{"", {0, 0, 0}, 16},
            Color{"", {0, 0, 51}, 17},
            Color{"", {0, 0, 102}, 18},
            Color{"", {0, 0, 153}, 19},
            Color{"", {0, 0, 204}, 20},
            Color{"", {0, 0, 255}, 21},
            Color{"", {0, 51, 0}, 22},
            Color{"", {0, 51, 51}, 23},
            Color{"", {0, 51, 102}, 24},
            Color{"", {0, 51, 153}, 25},
            Color{"", {0, 51, 204}, 26},
            Color{"", {0, 51, 255}, 27},
            Color{"", {0, 102, 0}, 28},
            Color{"", {0, 102, 51}, 29},
            Color{"", {0, 102, 102}, 30},
            Color{"", {0, 102, 153}, 31},
            Color{"", {0, 102, 204}, 32},
            Color{"", {0, 102, 255}, 33},
            Color{"", {0, 153, 0}, 34},
            Color{"", {0, 153, 51}, 35},
            Color{"", {0, 153, 102}, 36},
            Color{"", {0, 153, 153}, 37},
            Color{"", {0, 153, 204}, 38},
            Color{"", {0, 153, 255}, 39},
            Color{"", {0, 204, 0}, 40},
            Color{"", {0, 204, 51}, 41},
            Color{"", {0, 204, 102}, 42},
            Color{"", {0, 204, 153}, 43},
            Color{"", {0, 204, 204}, 44},
            Color{"", {0, 204, 255}, 45},
            Color{"", {0, 255, 0}, 46},
            Color{"", {0, 255, 51}, 47},
            Color{"", {0, 255, 102}, 48},
            Color{"", {0, 255, 153}, 49},
            Color{"", {0, 255, 204}, 50},
            Color{"", {0, 255, 255}, 51},
            Color{"", {51, 0, 0}, 52},
            Color{"", {51, 0, 51}, 53},
            Color{"", {51, 0, 102}, 54},
            Color{"", {51, 0, 153}, 55},
            Color{"", {51, 0, 204}, 56},
            Color{"", {51, 0, 255}, 57},
            Color{"", {51, 51, 0}, 58},
            Color{"", {51, 51, 51}, 59},
            Color{"", {51, 51, 102}, 60},
            Color{"", {51, 51, 153}, 61},
            Color{"", {51, 51, 204}, 62},
            Color{"", {51, 51, 255}, 63},
            Color{"", {51, 102, 0}, 64},
            Color{"", {51, 102, 51}, 65},
            Color{"", {51, 102, 102}, 66},
            Color{"", {51, 102, 153}, 67},
            Color{"", {51, 102, 204}, 68},
            Color{"", {51, 102, 255}, 69},
            Color{"", {51, 153, 0}, 70},
            Color{"", {51, 153, 51}, 71},
            Color{"", {51, 153, 102}, 72},
            Color{"", {51, 153, 153}, 73},
            Color{"", {51, 153, 204}, 74},
            Color{"", {51, 153, 255}, 75},
            Color{"", {51, 204, 0}, 76},
            Color{"", {51, 204, 51}, 77},
            Color{"", {51, 204, 102}, 78},
            Color{"", {51, 204, 153}, 79},
            Color{"", {51, 204, 204}, 80},
            Color{"", {51, 204, 255}, 81},
            Color{"", {51, 255, 0}, 82},
            Color{"", {51, 255, 51}, 83},
            Color{"", {51, 255, 102}, 84},
            Color{"", {51, 255, 153}, 85},
            Color{"", {51, 255, 204}, 86},
            Color{"", {51, 255, 255}, 87},
            Color{"", {102, 0, 0}, 88},
            Color{"", {102, 0, 51}, 89},
            Color{"", {102, 0, 102}, 90},
            Color{"", {102, 0, 153}, 91},
            Color{"", {102, 0, 204}, 92},
            Color{"", {102, 0, 255}, 93},
            Color{"", {102, 51, 0}, 94},
            Color{"", {102, 51, 51}, 95},
            Color{"", {102, 51, 102}, 96},
            Color{"", {102, 51, 153}, 97},
            Color{"", {102, 51, 204}, 98},
            Color{"", {102, 51, 255}, 99},
            Color{"", {102, 102, 0}, 100},
            Color{"", {102, 102, 51}, 101},
            Color{"", {102, 102, 102}, 102},
            Color{"", {102, 102, 153}, 103},
            Color{"", {102, 102, 204}, 104},
            Color{"", {102, 102, 255}, 105},
            Color{"", {102, 153, 0}, 106},
            Color{"", {102, 153, 51}, 107},
            Color{"", {102, 153, 102}, 108},
            Color{"", {102, 153, 153}, 109},
            Color{"", {102, 153, 204}, 110},
            Color{"", {102, 153, 255}, 111},
            Color{"", {102, 204, 0}, 112},
            Color{"", {102, 204, 51}, 113},
            Color{"", {102, 204, 102}, 114},
            Color{"", {102, 204, 153}, 115},
            Color{"", {102, 204, 204}, 116},
            Color{"", {102, 204, 255}, 117},
            Color{"", {102, 255, 0}, 118},
            Color{"", {102, 255, 51}, 119},
            Color{"", {102, 255, 102}, 120},
            Color{"", {102, 255, 153}, 121},
            Color{"", {102, 255, 204}, 122},
            Color{"", {102, 255, 255}, 123},
            Color{"", {153, 0, 0}, 124},
            Color{"", {153, 0, 51}, 125},
            Color{"", {153, 0, 102}, 126},
            Color{"", {153, 0, 153}, 127},
            Color{"", {153, 0, 204}, 128},
            Color{"", {153, 0, 255}, 129},
            Color{"", {153, 51, 0}, 130},
            Color{"", {153, 51, 51}, 131},
            Color{"", {153, 51, 102}, 132},
            Color{"", {153, 51, 153}, 133},
            Color{"", {153, 51, 204}, 134},
            Color{"", {153, 51, 255}, 135},
            Color{"", {153, 102, 0}, 136},
            Color{"", {153, 102, 51}, 137},
            Color{"", {153, 102, 102}, 138},
            Color{"", {153, 102, 153}, 139},
            Color{"", {153, 102, 204}, 140},
            Color{"", {153, 102, 255}, 141},
            Color{"", {153, 153, 0}, 142},
            Color{"", {153, 153, 51}, 143},
            Color{"", {153, 153, 102}, 144},
            Color{"", {153, 153, 153}, 145},
            Color{"", {153, 153, 204}, 146},
            Color{"", {153, 153, 255}, 147},
            Color{"", {153, 204, 0}, 148},
            Color{"", {153, 204, 51}, 149},
            Color{"", {153, 204, 102}, 150},
            Color{"", {153, 204, 153}, 151},
            Color{"", {153, 204, 204}, 152},
            Color{"", {153, 204, 255}, 153},
            Color{"", {153, 255, 0}, 154},
            Color{"", {153, 255, 51}, 155},
            Color{"", {153, 255, 102}, 156},
            Color{"", {153, 255, 153}, 157},
            Color{"", {153, 255, 204}, 158},
            Color{"", {153, 255, 255}, 159},
            Color{"", {204, 0, 0}, 160},
            Color{"", {204, 0, 51}, 161},
            Color{"", {204, 0, 102}, 162},
            Color{"", {204, 0, 153}, 163},
            Color{"", {204, 0, 204}, 164},
            Color{"", {204, 0, 255}, 165},
            Color{"", {204, 51, 0}, 166},
            Color{"", {204, 51, 51}, 167},
            Color{"", {204, 51, 102}, 168},
            Color{"", {204, 51, 153}, 169},
            Color{"", {204, 51, 204}, 170},
            Color{"", {204, 51, 255}, 171},
            Color{"", {204, 102, 0}, 172},
            Color{"", {204, 102, 51}, 173},
            Color{"", {204, 102, 102}, 174},
            Color{"", {204, 102, 153}, 175},
            Color{"", {204, 102, 204}, 176},
            Color{"", {204, 102, 255}, 177},
            Color{"", {204, 153, 0}, 178},
            Color{"", {204, 153, 51}, 179},
            Color{"", {204, 153, 102}, 180},
            Color{"", {204, 153, 153}, 181},
            Color{"", {204, 153, 204}, 182},
            Color{"", {204, 153, 255}, 183},
            Color{"", {204, 204, 0}, 184},
            Color{"", {204, 204, 51}, 185},
            Color{"", {204, 204, 102}, 186},
            Color{"", {204, 204, 153}, 187},
            Color{"", {204, 204, 204}, 188},
            Color{"", {204, 204, 255}, 189},
            Color{"", {204, 255, 0}, 190},
            Color{"", {204, 255, 51}, 191},
            Color{"", {204, 255, 102}, 192},
            Color{"", {204, 255, 153}, 193},
            Color{"", {204, 255, 204}, 194},
            Color{"", {204, 255, 255}, 195},
            Color{"", {255, 0, 0}, 196},
            Color{"", {255, 0, 51}, 197},
            Color{"", {255, 0, 102}, 198},
            Color{"", {255, 0, 153}, 199},
            Color{"", {255, 0, 204}, 200},
            Color{"", {255, 0, 255}, 201},
            Color{"", {255, 51, 0}, 202},
            Color{"", {255, 51, 51}, 203},
            Color{"", {255, 51, 102}, 204},
            Color{"", {255, 51, 153}, 205},
            Color{"", {255, 51, 204}, 206},
            Color{"", {255, 51, 255}, 207},
            Color{"", {255, 102, 0}, 208},
            Color{"", {255, 102, 51}, 209},
            Color{"", {255, 102, 102}, 210},
            Color{"", {255, 102, 153}, 211},
            Color{"", {255, 102, 204}, 212},
            Color{"", {255, 102, 255}, 213},
            Color{"", {255, 153, 0}, 214},
            Color{"", {255, 153, 51}, 215},
            Color{"", {255, 153, 102}, 216},
            Color{"", {255, 153, 153}, 217},
            Color{"", {255, 153, 204}, 218},
            Color{"", {255, 153, 255}, 219},
            Color{"", {255, 204, 0}, 220},
            Color{"", {255, 204, 51}, 221},
            Color{"", {255, 204, 102}, 222},
            Color{"", {255, 204, 153}, 223},
            Color{"", {255, 204, 204}, 224},
            Color{"", {255, 204, 255}, 225},
            Color{"", {255, 255, 0}, 226},
            Color{"", {255, 255, 51}, 227},
            Color{"", {255, 255, 102}, 228},
            Color{"", {255, 255, 153}, 229},
            Color{"", {255, 255, 204}, 230},
            Color{"", {255, 255, 255}, 231},
            Color{"", {0, 0, 0}, 232},
            Color{"", {10, 10, 10}, 233},
            Color{"", {20, 20, 20}, 234},
            Color{"", {30, 30, 30}, 235},
            Color{"", {40, 40, 40}, 236},
            Color{"", {50, 50, 50}, 237},
            Color{"", {60, 60, 60}, 238},
            Color{"", {70, 70, 70}, 239},
            Color{"", {80, 80, 80}, 240},
            Color{"", {90, 90, 90}, 241},
            Color{"", {100, 100, 100}, 242},
            Color{"", {110, 110, 110}, 243},
            Color{"", {120, 120, 120}, 244},
            Color{"", {130, 130, 130}, 245},
            Color{"", {140, 140, 140}, 246},
            Color{"", {150, 150, 150}, 247},
            Color{"", {160, 160, 160}, 248},
            Color{"", {170, 170, 170}, 249},
            Color{"", {180, 180, 180}, 250},
            Color{"", {190, 190, 190}, 251},
            Color{"", {200, 200, 200}, 252},
            Color{"", {210, 210, 210}, 253},
            Color{"", {220, 220, 220}, 254},
            Color{"", {230, 230, 230}, 255},
    };

    namespace NamedColors {
        const Color Black = colors[0];
        const Color Red = colors[1];
        const Color Green = colors[2];
        const Color Yellow = colors[3];
        const Color Blue = colors[4];
        const Color Magenta = colors[5];
        const Color Cyan = colors[6];
        const Color White = colors[7];

        const Color BrightBlack = colors[8];
        const Color BrightRed = colors[9];
        const Color BrightGreen = colors[10];
        const Color BrightYellow = colors[11];
        const Color BrightBlue = colors[12];
        const Color BrightMagenta = colors[13];
        const Color BrightCyan = colors[14];
        const Color BrightWhite = colors[15];

        const Color Gray = colors[8];
    }

    namespace {

        constexpr float SQR(float x) {return x * x;}

        uint8_t get_closest_vt100_16_value(uint8_t color_code) {

            float closest = 10000000;
            uint8_t closest_color = color_code;
            for(int i = 0; i < 16; ++i) {
                float dist = SQR((float)colors[i].rgb.red - (float)colors[color_code].rgb.red)
                            + SQR((float)colors[i].rgb.green - (float)colors[color_code].rgb.green)
                            + SQR((float)colors[i].rgb.blue - (float)colors[color_code].rgb.blue);
                if(dist < closest) {
                    closest = dist;
                    closest_color = i;
                }
            }

            return closest_color;
        }

        std::string colorize_string_vt100_8(std::string value, std::optional<Color> foreground, std::optional<Color> background) {
            std::string foreground_prefix{};
            std::string background_prefix{};

            if(foreground.has_value()) {
                auto foreground_code = foreground->vt100_color_code;
                if(foreground_code > 15) {
                    foreground_code = get_closest_vt100_16_value(foreground_code);
                }
                foreground_code = foreground_code % 8;
                foreground_prefix = "\033[3" + std::to_string(foreground_code) + "m";
            }

            if(background.has_value()) {
                auto background_code = background->vt100_color_code;
                if (background_code > 15) {
                    background_code = get_closest_vt100_16_value(background_code);
                }
                background_code = background_code % 8;
                background_prefix = "\033[4" + std::to_string(background_code) + "m";;
            }

            auto prefix = foreground_prefix + background_prefix;
            auto postfix = "\033[39m\033[49m";
            return prefix + value + postfix;
        }

        std::string colorize_string_vt100_16(std::string value, std::optional<Color> foreground, std::optional<Color> background) {
            std::string foreground_prefix{};
            std::string background_prefix{};

            if(foreground.has_value()) {
                auto foreground_code = foreground->vt100_color_code;
                if(foreground_code > 15) {
                    foreground_code = get_closest_vt100_16_value(foreground_code);
                }

                if(foreground_code <= 7) {
                    foreground_prefix = "\033[3" + std::to_string(foreground_code) + "m";
                } else {
                    foreground_prefix = "\033[9" + std::to_string(foreground_code % 8) + "m";
                }
            }

            if(background.has_value()) {
                auto background_code = background->vt100_color_code;
                if (background_code > 15) {
                    background_code = get_closest_vt100_16_value(background_code);
                }

                if(background_code <= 7) {
                    background_prefix = "\033[4" + std::to_string(background_code) + "m";
                } else {
                    background_prefix = "\033[10" + std::to_string(background_code % 8) + "m";
                }

            }

            auto prefix = foreground_prefix + background_prefix;
            auto postfix = "\033[39m\033[49m";
            return prefix + value + postfix;
        }

        std::string colorize_string_vt100_256(std::string value, std::optional<Color> foreground, std::optional<Color> background) {
            std::string foreground_prefix{};
            std::string background_prefix{};

            if(foreground.has_value()) {
                foreground_prefix = "\033[38;5;" + std::to_string(foreground->vt100_color_code) + "m";
            }

            if(background.has_value()) {
                background_prefix = "\033[48;5;" + std::to_string(background->vt100_color_code) + "m";
            }
            auto prefix = foreground_prefix + background_prefix;
            auto postfix = "\033[39m\033[49m";
            return prefix + value + postfix;
        }

        std::string colorize_string_truecolor(std::string value, std::optional<Color> foreground, std::optional<Color> background) {

            std::string foreground_prefix{};
            std::string background_prefix{};

            if(foreground.has_value()) {
                foreground_prefix = "\033[38;2;" + std::to_string(foreground->rgb.red) + ";"
                                    + std::to_string(foreground->rgb.green) + ";"
                                    + std::to_string(foreground->rgb.blue) + "m";
            }
            if(background.has_value()) {
                background_prefix = "\033[48;2;" + std::to_string(background->rgb.red) + ";"
                                    + std::to_string(background->rgb.green) + ";"
                                    + std::to_string(background->rgb.blue) + "m";
            }
            auto prefix = foreground_prefix + background_prefix;
            auto postfix = "\033[39m\033[49m";
            return prefix + value + postfix;
        }

    }

    std::string colorize_string(std::string value, ColorMode color_mode, std::optional<Color> foreground, std::optional<Color> background) {

        if(color_mode == ColorMode::MONOCHROME) {
            return value;
        }
        if(color_mode == ColorMode::VT100_8_COLORS) {
            return colorize_string_vt100_8(value, foreground, background);
        }
        if(color_mode == ColorMode::VT100_16_COLORS) {
            return colorize_string_vt100_16(value, foreground, background);
        }
        if(color_mode == ColorMode::VT100_256_COLORS) {
            return colorize_string_vt100_256(value, foreground, background);
        }
        if(color_mode == ColorMode::TRUE_COLOR_24BIT)  {
            return colorize_string_truecolor(value, foreground, background);
        }

        throw std::logic_error{"Colorize function does not implement formatter for given mode"};
    }

}