#ifndef TEST_COLOR_CODE_H
#define TEST_COLOR_CODE_H
#include <assert.h>
#include "ColorCodeGeneration.h"

using namespace ColorCode;

void testValueToPair(int pairNumber, primaryColor expectedMajor, secondaryColor expectedMinor);
void testPairToValue(primaryColor major, secondaryColor minor, int expectedValue);

#endif //TEST_COLOR_CODE_H