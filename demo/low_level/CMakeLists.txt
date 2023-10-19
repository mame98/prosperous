add_executable(color-print color_print.cpp)
add_executable(markup-text markup_text.cpp)
add_executable(console-features console_features.cpp)
add_executable(glyph-counter glyph_counter.cpp)


target_link_libraries(color-print PRIVATE prosperous)
target_link_libraries(markup-text PRIVATE prosperous)
target_link_libraries(console-features PRIVATE prosperous)
target_link_libraries(glyph-counter PRIVATE prosperous)

