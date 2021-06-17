
#include <iostream>
#include "SpecialCalculator.cpp"



using namespace std;

int main()
{
	CalculatorWithMod myCalculator; //change the class name to CalculatorWithMod when you finish your modifications
	int x, y;

	cout << "Input 1st integer: ";
	cin >> x;
	cout << "Input 2nd integer: ";
	cin >> y;

	cout << "The sum is " << myCalculator.addition(x, y) << '\n';
	cout << "The difference is " << myCalculator.subtraction(x, y) << '\n';
	cout << "The product is " << myCalculator.multiplication(x, y) << '\n';

	try
	{
		float quotient = myCalculator.division(x, y);
		cout << "The quotient is " << quotient << '\n';
	}
	catch (const char* e)
	{
		cout << e << " Answer is undefined..." << endl;
	}


	try
	{
		int remainder = myCalculator.modulo(x, y);
		cout << "The remainder is " << remainder << '\n';
	}
	catch (const char* e)
	{
			cout << e << " Answer is undefined..." << endl;
	}


	return 0;
}
