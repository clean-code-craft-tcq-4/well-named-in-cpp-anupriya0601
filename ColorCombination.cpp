#include "ColorCombination.h"

namespace TelCoColorCoder{
    const char* MajorColors[]= {"White", "Red", "Black", "Yellow", "Violet"};
    int MajorColorsCount=
            sizeof(MajorColors) / sizeof(MajorColors[0]);
    const char* MinorColors[] = {
                "Blue", "Orange", "Green", "Brown", "Slate"
            };
    int MinorColorsCount =
                sizeof(MinorColors) / sizeof(MinorColors[0]);
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / MinorColorsCount);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % MinorColorsCount);
        return ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * MinorColorsCount + minor + 1;
    }
}
