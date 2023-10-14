#include <prosperous/RichText.hpp>
#include <iostream>

int main() {
    prosperous::TextMarkup base_markup{};
    base_markup.background = prosperous::NamedColors::Red;

    prosperous::TextMarkup green_markup{};
    green_markup.background = prosperous::NamedColors::Green;

    prosperous::TextMarkup blue_markup{};
    blue_markup.foreground = prosperous::NamedColors::Blue;


    prosperous::RichText text{"This is a Text", base_markup};
    text.add_markup(0,4, green_markup);
    text.add_markup(8, 9, green_markup);
    text.add_markup(1,2, blue_markup);
    text.add_markup(3,4, blue_markup);
    text.add_markup(8,12, blue_markup);

    std::cout << text.render(prosperous::ColorMode::MONOCHROME) << "\n";
    return 0;
}