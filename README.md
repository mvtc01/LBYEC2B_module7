# Laboratory Activity 7 - Inheritance and Exception Handling

## Special Calculator

You are provided now some existing that contains a class that can instantiate a simple calculator object. You are now tasked to create a SpecialCalculator object.

Inherit the Calculator class to create new class called SpecialCalculator. It should then contain an additional method for calculating modulo operation.

Note: the modulo method should only work on the sub class, and not on the base class!

Make sure to include exception handling when divisor is equal to 0. You would need to add throw on your methods. Afterwards, when invoking the said relevant method, it should be enclosed on try-catch block.

Additional Note: The modulo operation (or "modulus" or "mod") is the remainder after dividing one number by another.

Example: 20 mod 3 equals 2
Because 20/3 = 6 with a remainder of 2

See the sample outputs below:

| Sample Console Input | Expected Console Output                                                                                                                                                                                                     |
| -------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 12 <br>-5            | Welcome to my Calculator<br>Input 1st integer: 12<br>Input 2nd integer: -5<br>The sum is 7<br>The difference is 17<br>The product is -60<br>The quotient is -2.4<br>The modulo is 2                                         |
| 5 <br>0              | Welcome to my Calculator<br>Input 1st integer: 5<br>Input 2nd integer: 0<br>The sum is 5<br>The difference is 5<br>The product is 0<br>Division by zero! Answer is undefined...<br>Division by zero! Answer is undefined... |

## Additional Note on Repl.it :

In you case you opted to run this code with Repl.it. Make sure to delete the file "repl.it" before clicking the run button.
