#ifndef __SPECIALCALCULATOR_H__
#define __SPECIALCALCULATOR_H__
#include "Calculator.cpp"

class CalculatorWithMod: public Calculator{
public:
    int modulo(int, int);
};

#endif

