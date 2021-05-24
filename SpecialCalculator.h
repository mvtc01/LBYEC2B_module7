
#ifndef __SPECIALCALCULATOR_H__
#define __SPECIALCALCULATOR_H__

#include "Calculator.h"

class CalculatorWithMod: public Calculator{
public:
    CalculatorWithMod();
    int modulo(int, int);
};


#endif

