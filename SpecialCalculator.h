
#ifndef __SPECIALCALCULATOR_H__
#define __SPECIALCALCULATOR_H__

class Calculator
{
public:
    Calculator();
    int addition(int, int);
    int subtraction(int, int);
    int multiplication(int, int);
    float division(int, int);
};

class CalculatorWithMod: public Calculator{
public:
    CalculatorWithMod();
    int modulo(int, int);
};


#endif

