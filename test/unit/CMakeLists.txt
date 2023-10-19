include(GoogleTest)


add_executable(test-glyph-count TestGlyphCount.cpp)
target_link_libraries(test-glyph-count PRIVATE gtest gtest_main prosperous)
gtest_discover_tests(test-glyph-count)