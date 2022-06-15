#ifndef COLORCOMBINATION_H
#define COLORCOMBINATION_H

#include <iostream>

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    extern const char* MajorColors[];
    extern int MajorColorsCount;
    extern const char* MinorColors[];
    extern int MinorColorsCount;
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