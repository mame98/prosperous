#ifndef PROSPEROUS_RICHTEXT_HPP
#define PROSPEROUS_RICHTEXT_HPP

#include <cstdlib>
#include <string>
#include <vector>

#include <prosperous/Colors.hpp>

namespace prosperous {

    struct TextMarkup {
        std::optional<Color> background;
        std::optional<Color> foreground;

        void update(const TextMarkup& other);
    };

    struct Span {
        size_t start{};
        size_t end{};
        TextMarkup markup;

        Span(size_t start, size_t end, TextMarkup markup)
            : start{start}
            , end{end}
            , markup(markup)
        {}

        bool is_valid() const;
    };

    class RichText {

    public:
        explicit RichText(std::string text) : text(std::move(text)) {}
        RichText(std::string text, TextMarkup markup) : text(std::move(text)), base_markup(markup) {}
        static RichText from_markup(std::string markup);
        void add_markup(size_t start, size_t end, TextMarkup markup);
        [[nodiscard]] std::string render(ColorMode color_mode) const;
    private:
        std::string text;
        TextMarkup base_markup{};
        std::vector<Span> markup_spans{};

    };

} // prosperous

#endif //PROSPEROUS_RICHTEXT_HPP
