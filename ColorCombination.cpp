#include "ColorCombination.h"

namespace TelCoColorCoder{
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
