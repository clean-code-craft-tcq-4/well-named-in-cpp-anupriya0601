#ifndef TEST_H
#define TEST_H
#include <assert.h>
#include "ColorCombination.h"

using namespace TelCoColorCoder;
    void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);
    void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber);

#endif