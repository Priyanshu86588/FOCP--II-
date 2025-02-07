// Crete a program to perform division without using the / operatr implementing both integer and floating-point division manually.
#include <iostream>
#include <cmath>
using namespace std;

int integerDivision(int dividend, int divisor) {
    if (divisor == 0) throw invalid_argument("Division by zero!");
    int quotient = 0, sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
    dividend = abs(dividend), divisor = abs(divisor);
    while (dividend >= divisor) dividend -= divisor, quotient++;
    return sign * quotient;
}

double floatingPointDivision(double dividend, double divisor, int precision = 6) {
    if (divisor == 0.0) throw invalid_argument("Division by zero!");
    bool isNegative = (dividend < 0) ^ (divisor < 0);
    dividend = fabs(dividend), divisor = fabs(divisor);
    double result = 0.0, factor = 1.0;
    for (int i = 0; i < precision + 1; i++, factor /= 10)
        for (int digit = 0; dividend >= divisor; digit++, dividend -= divisor)
            result += digit * factor, dividend *= 10;
    return isNegative ? -result : result;
}

int main() {
    cout << "Integer Division: " << integerDivision(25, 4) << endl;
    cout << "Floating Point Division: " << floatingPointDivision(25.0, 4.0) << endl;
    return 0;
}


