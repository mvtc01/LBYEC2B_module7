#include "Calculator.h"
#ifndef __SPECIALCALCULATOR_H__
#define __SPECIALCALCULATOR_H__
#include "SpecialCalculator.cpp"


class CalculatorWithMod: public Calculator{
public:
    int modulo(int, int);
};


#endif

