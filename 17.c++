//write a program in c++ to perform division without using / operator implementing both the integer and floating-point division manually
#include <iostream>

using namespace std;

float floatDivision(float dividend, float divisor, int precision = 6) {
    if (divisor == 0) {
        cout << "Error! Division by zero." << endl;
        return -1;
    }

    float quotient = 0.0;
    float step = 1.0;

    for (int i = 0; i < precision + 1; i++) {
        while (dividend >= divisor) {
            dividend -= divisor;
            quotient += step;
        }
        dividend *= 10;
        quotient *= 10;
        step /= 10;
    }

    return quotient / 10;
}

int main() {
    

    float num3 = 10.5, num4 = 3.2;
    cout << "Floating Point Division: " << num3 << " / " << num4 << " = " << floatDivision(num3, num4) << endl;

    return 0;
}
