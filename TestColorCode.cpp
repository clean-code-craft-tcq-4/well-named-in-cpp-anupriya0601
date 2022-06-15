#include "TestColorCode.h"

using namespace ColorCode;
    void testValueToPair(int pairNumber, primaryColor expectedMajor, secondaryColor expectedMinor) {
        ColorPair colorPair = GetColorFromValue(pairNumber);
        std::cout << "Got pair " << colorPair.ToString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    void testPairToValue(primaryColor major, secondaryColor minor, int expectedValue) {
        int pairNumber = GetValueFromColor(major, minor);
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedValue);
    }

