add_executable(color-print color_print.cpp)
add_executable(markup-text markup_text.cpp)


target_link_libraries(color-print PRIVATE prosperous)
target_link_libraries(markup-text PRIVATE prosperous)