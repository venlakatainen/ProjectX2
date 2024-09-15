#include "src/calculator.h"

int main() {
    // Function calls to calculate
    // Write your all possible input scenarios here
    // Notice that calculator code written here works with floats now

    // addition
    calculator(3.0, '+' 5.2)

    // substraction
    calculator(5.6, '-', 4.1)

    //division
    calculator(10.0, '/', 2.5)

    //multiply
    calculator(10.2, '*', 2)

    //edge cases
    calculator(10.0, '/', 4.6)
    calculator(10.9, '/', 0.0)
    calculator(5.8, '-', 10.30)
    calculator(-5.90, '+', 10.80)
    calculator(0.0, '*', 0.0)
    calculator(0.0, '/', 10.70)
    calculator(-5, '*', -4)
    calculator(1.7976931348623158e+308, '*', 1.7976931348623158e+308) //max integer
    calculator(-2.2204460492503131e-016 - 1, '-', -2.2204460492503131e-016 - 1) // min integer

    // error cases
    calculator('a', '+', 2.5)
    calculator(2, '-', 'p')
    calculator(2.5, 2.5, 2.5)
    calculator('l', 2.5, 'p')

    // add test comment and remove one




    return 0;
}
