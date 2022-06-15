#ifndef COLOR_COMBINATION_H
#define COLOR_COMBINATION_H

#include <iostream>

namespace ColorCode
{
    enum primaryColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum secondaryColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    extern const char* MajorColorsList[];
    extern int MajorColorsCount;
    extern const char* MinorColorsList[];
    extern int MinorColorsCount;
    class ColorPair {
        private:
            primaryColor major;
            secondaryColor minor;
        public:
            ColorPair(primaryColor major, secondaryColor minor):
                major(major), minor(minor)
            {}
            primaryColor getMajor() {
                return major;
            }
            secondaryColor getMinor() {
                return minor;
            }
            std::string ToString() {
                std::string colorPairStr = MajorColorsList[major];
                colorPairStr += " ";
                colorPairStr += MinorColorsList[minor];
                return colorPairStr;
            }
    };
    ColorPair GetColorFromValue(int colorCodeValue);
    int GetValueFromColor(primaryColor major, secondaryColor minor);
    void printColorCodeManual();
}
#endif //COLOR_COMBINATION_H