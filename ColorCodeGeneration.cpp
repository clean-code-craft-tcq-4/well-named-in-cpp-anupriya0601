#include "ColorCodeGeneration.h"

namespace ColorCode{

    const char* MajorColorsList[] = {"White", "Red", "Black", "Yellow", "Violet"};
    int MajorColorsCount = sizeof(MajorColorsList) / sizeof(MajorColorsList[0]);
    const char* MinorColorsList[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int MinorColorsCount = sizeof(MinorColorsList) / sizeof(MinorColorsList[0]);

    ColorPair GetColorFromValue(int colorCodeValue) {
        int indexValue = colorCodeValue - 1;
        primaryColor majorColor = (primaryColor)(indexValue / MinorColorsCount);
        secondaryColor minorColor = (secondaryColor)(indexValue % MinorColorsCount);
        return ColorPair(majorColor, minorColor);
    }
    int GetValueFromColor(primaryColor major, secondaryColor minor) {
        return major * MinorColorsCount + minor + 1;
    }
    void printColorCodeManual() {
        std::cout<<std::endl<<"Color code Manual"<<std::endl;
        for(int i=1;i<=25;i++) {
            std::cout<<i<<"\t"<<GetColorFromValue(i).ToString()<< std::endl;
        }
    }
}
