
#include "Calculator.h"
#ifndef __SPECIALCALCULATOR_H__
#define __SPECIALCALCULATOR_H__

class CalculatorWithMod: public Calculator{
public:
    CalculatorWithMod();
    int modulo(int, int);
};


#endif

