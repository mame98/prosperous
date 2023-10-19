#include <prosperous/Meassurement.hpp>
#include <gtest/gtest.h>

TEST(GlyphCount, EmptyString) {
    ASSERT_EQ(0, prosperous::get_glyph_count(""));
}

TEST(GlyphCount, SingleLowercaseASCII) {
    ASSERT_EQ(1, prosperous::get_glyph_count("a"));
    ASSERT_EQ(1, prosperous::get_glyph_count("z"));
}

TEST(GlyphCount, SingleUppercaseASCII) {
    ASSERT_EQ(1, prosperous::get_glyph_count("A"));
    ASSERT_EQ(1, prosperous::get_glyph_count("Z"));
}

TEST(GlyphCount, SingleSpecialASCII) {
    ASSERT_EQ(1, prosperous::get_glyph_count("!"));
    ASSERT_EQ(1, prosperous::get_glyph_count("$"));
}

TEST(GlyphCount, SingleNumberASCII) {
    ASSERT_EQ(1, prosperous::get_glyph_count("1"));
    ASSERT_EQ(1, prosperous::get_glyph_count("9"));
}

TEST(GlyphCount, MultiNumberASCII) {
    ASSERT_EQ(3, prosperous::get_glyph_count("101"));
    ASSERT_EQ(4, prosperous::get_glyph_count("0923"));
}

TEST(GlyphCount, MultiLowercaseASCII) {
    ASSERT_EQ(4, prosperous::get_glyph_count("test"));
    ASSERT_EQ(8, prosperous::get_glyph_count("foo bar!"));
}

TEST(GlyphCount, MultiUppercaseASCII) {
    ASSERT_EQ(4, prosperous::get_glyph_count("TEST"));
    ASSERT_EQ(8, prosperous::get_glyph_count("FOO BAR!"));
}

TEST(GlyphCount, MultiMixedASCII) {
    ASSERT_EQ(15, prosperous::get_glyph_count("This is a Test!"));
    ASSERT_EQ(12, prosperous::get_glyph_count("Total: $1.42"));
}

TEST(GlyphCount, SingleLowercaseGerman) {
    ASSERT_EQ(1, prosperous::get_glyph_count("ä"));
    ASSERT_EQ(1, prosperous::get_glyph_count("ß"));
}

TEST(GlyphCount, SingleUppercaseGerman) {
    ASSERT_EQ(1, prosperous::get_glyph_count("Ö"));
    ASSERT_EQ(1, prosperous::get_glyph_count("ẞ"));
}

TEST(GlyphCount, MultiLowercaseGerman) {
    ASSERT_EQ(3, prosperous::get_glyph_count("äöü"));
    ASSERT_EQ(3, prosperous::get_glyph_count("ßüö"));
}

TEST(GlyphCount, MultiUppercaseGerman) {
    ASSERT_EQ(2, prosperous::get_glyph_count("ÖÜ"));
    ASSERT_EQ(4, prosperous::get_glyph_count("ÄẞÖÜ"));
}

TEST(GlyphCount, MultiMixedGerman) {
    ASSERT_EQ(16, prosperous::get_glyph_count("Göttinger Straße"));
    ASSERT_EQ(3, prosperous::get_glyph_count("ÄüÖ"));
}

TEST(GlyphCount, SingleLowercaseSpanish) {
    ASSERT_EQ(1, prosperous::get_glyph_count("ñ"));
    ASSERT_EQ(1, prosperous::get_glyph_count("ó"));
}

TEST(GlyphCount, SingleUppercaseSpanish) {
    ASSERT_EQ(1, prosperous::get_glyph_count("Ñ"));
    ASSERT_EQ(1, prosperous::get_glyph_count("Ó"));
}

TEST(GlyphCount, SingleSpecialSpanish) {
    ASSERT_EQ(1, prosperous::get_glyph_count("¿"));
    ASSERT_EQ(1, prosperous::get_glyph_count("¡"));
}

TEST(GlyphCount, MultiLowercaseSpanish) {
    ASSERT_EQ(2, prosperous::get_glyph_count("ñó"));
    ASSERT_EQ(3, prosperous::get_glyph_count("óóó"));
}

TEST(GlyphCount, MultiUppercaseSpanish) {
    ASSERT_EQ(4, prosperous::get_glyph_count("ÓÑÑÓ"));
    ASSERT_EQ(2, prosperous::get_glyph_count("ÑÓ"));
}

TEST(GlyphCount, MultiMixedSpanish) {
    ASSERT_EQ(5, prosperous::get_glyph_count("Señor"));
    ASSERT_EQ(8, prosperous::get_glyph_count("Señorita"));
}

TEST(GlyphCount, SingleBasicEmoji) {
    ASSERT_EQ(1, prosperous::get_glyph_count(u8"\U0001F620"));
    ASSERT_EQ(1, prosperous::get_glyph_count(u8"\U0001F644"));
}

TEST(GlyphCount, SingleJapanese) {
    ASSERT_EQ(1, prosperous::get_glyph_count("ヘ"));
    ASSERT_EQ(1, prosperous::get_glyph_count("プ"));
}

TEST(GlyphCount, MultiJapanese) {
    ASSERT_EQ(3, prosperous::get_glyph_count("ヘルプ"));
    ASSERT_EQ(11, prosperous::get_glyph_count("私は日本語を話せません"));
}

TEST(GlyphCount, SingleHindi) {
    ASSERT_EQ(1, prosperous::get_glyph_count("म"));
    ASSERT_EQ(1, prosperous::get_glyph_count("द"));
}

TEST(GlyphCount, MultiHindi) {
    ASSERT_EQ(3, prosperous::get_glyph_count("मदद"));
}