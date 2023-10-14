#include "RichText.hpp"

#include <utility>
#include <algorithm>

namespace prosperous {

    bool Span::is_valid() const {
        return start <= end;
    }

    RichText RichText::from_markup(std::string markup) {
        return RichText(std::move(markup));
    }

    void TextMarkup::update(const TextMarkup &other) {
        foreground = other.foreground ? other.foreground : foreground;
        background = other.background ? other.background : background;
    }

    void RichText::add_markup(size_t start, size_t end, TextMarkup markup) {
        markup_spans.emplace_back(start, end, markup);
    }

    namespace {

        struct SpanChange {
            const Span* span;
            bool is_end;
            size_t location;

            bool operator<(const SpanChange& other) const {
                return location < other.location;
            }
        };

        std::vector<SpanChange> compute_merged_spans(const std::vector<Span>& spans) {
            std::vector<SpanChange> merged_spans{};
            merged_spans.reserve(spans.size() * 2);

            for(const auto& span : spans) {
                SpanChange start{&span, false, span.start};
                SpanChange stop{&span, true, span.end};
                auto upper_bound_start = std::upper_bound(merged_spans.begin(), merged_spans.end(), start);
                merged_spans.insert(upper_bound_start, start);

                auto upper_bound_stop = std::upper_bound(merged_spans.begin(), merged_spans.end(), stop);
                merged_spans.insert(upper_bound_stop, stop);
            }

            return merged_spans;
        }

        std::vector<RichText> compute_subtexts(TextMarkup base_markup, const std::string& text, const std::vector<SpanChange>& merged_spans) {
            std::vector<RichText> subtexts{};
            std::vector<const Span*> current_spans{};
            size_t last_location = 0;
            for(const auto& span_change : merged_spans) {


                auto affected_substring = text.substr(last_location, span_change.location - last_location);
                if(!affected_substring.empty()) {
                    TextMarkup markup = base_markup;
                    for(const auto* span : current_spans) {
                        markup.update(span->markup);
                    }
                    subtexts.emplace_back(affected_substring, markup);
                }

                if(!span_change.is_end) {
                    current_spans.push_back(span_change.span);
                }
                if(span_change.is_end) {
                    current_spans.erase(std::remove(current_spans.begin(), current_spans.end(), span_change.span), current_spans.end());
                }

                last_location = span_change.location;
            }

            auto remaining_string = text.substr(last_location);
            TextMarkup markup = base_markup;
            for(const auto* span : current_spans) {
                markup.update(span->markup);
            }

            subtexts.emplace_back(remaining_string, markup);
            return subtexts;
        }


    }

    std::string RichText::render() const {

        if(markup_spans.empty()) {
            return colorize_string(text, ColorMode::TRUE_COLOR_24BIT, base_markup.foreground, base_markup.background);
        }

        auto merged_spans = compute_merged_spans(this->markup_spans);
        auto subtexts = compute_subtexts(this->base_markup, this->text, merged_spans);

        std::string result{};
        for(const auto& subtext : subtexts) {
            result += subtext.render();
        }

        return result;
    }

} // prosperous