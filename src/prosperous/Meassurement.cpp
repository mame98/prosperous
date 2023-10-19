#include <bitset>
#include "Meassurement.hpp"

namespace prosperous {

    size_t get_glyph_count(std::string string) {

        using CharBits = std::bitset<8>;

        size_t glyphs = 0;
        for(size_t iter = 0; iter < string.size(); ++iter) {
            glyphs += 1;

            CharBits bits{(unsigned char)string[iter]};
            if(bits.test(7-0) == 0) {
                continue;
            }

            if(bits.test(7-0) == 1 && bits.test(7-1) == 1 && bits.test(7-2) == 0) {
                iter += 1;
                continue;
            }

            if(bits.test(7-0) == 1 && bits.test(7-1) == 1 && bits.test(7-2) == 1 && bits.test(7-3) == 0) {
                iter += 2;
                continue;
            }

            if(bits.test(7-0) == 1 && bits.test(7-1) == 1 && bits.test(7-2) == 1 && bits.test(7-3) == 1 && bits.test(7-4) == 0) {
                iter += 3;
                continue;
            }
        }

        return glyphs;
    }

} // prosperous