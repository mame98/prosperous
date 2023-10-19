#include <prosperous/Console.hpp>
#include <prosperous/Meassurement.hpp>

#include <iostream>

int main() {
    std::string text;
    std::cin >> text;
    prosperous::Console console{};
    console.print(text + ": " + std::to_string(prosperous::get_glyph_count(text)));
    return 0;
}