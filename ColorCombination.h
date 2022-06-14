#ifndef COLOR_COMBINATION_H
#define COLOR_COMBINATION_H

#include <iostream>

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    const char* MajorColors[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    int MajorColorsCount =
        sizeof(MajorColors) / sizeof(MajorColors[0]);
    const char* MinorColors[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    int MinorColorsCount =
        sizeof(MinorColors) / sizeof(MinorColors[0]);

    class ColorPair {
        private:
            MajorColor major;
            MinorColor minor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                major(major), minor(minor)
            {}
            MajorColor getMajor() {
                return major;
            }
            MinorColor getMinor() {
                return minor;
            }
            std::string ToString() {
                std::string colorPairStr = MajorColors[major];
                colorPairStr += " ";
                colorPairStr += MinorColors[minor];
                return colorPairStr;
            }
    };
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
#endif