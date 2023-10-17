#include <prosperous/Console.hpp>

int main() {

    auto console = prosperous::Console{};

    console.print("Printing a string to the console!");

    auto rich = prosperous::RichText{"This is Rich Text!"};
    rich.add_markup(0,4, prosperous::TextMarkup{prosperous::NamedColors::Red});
    rich.add_markup(8,12, prosperous::TextMarkup{prosperous::NamedColors::Cyan});

    console.print(rich);

    console.print("Terminal Width: " + std::to_string(console.get_width()));
    console.print("Terminal Height: " + std::to_string(console.get_height()));

}