import math
def get_rgb_from_color_code(color_code: int) -> tuple[int, int, int]:
    assert 16 <= color_code

    if color_code <= 231:
        color_code -= 16
        r = int(math.floor(color_code / 36) / 5 * 255)
        g = int(math.floor((color_code % 36) / 6) / 5 * 255)
        b = int(math.floor((color_code % 36) % 6) / 5 * 255)
    else:
        r = g = b = 255 // 24 * (color_code - 232)

    return r, g, b


for i in range(16, 256):
    print(f"            Color{{\"\", {{{', '.join([str(x) for x in get_rgb_from_color_code(i)])}}}, {i}}},")