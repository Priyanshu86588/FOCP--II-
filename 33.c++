//create a program that determines whether a given floating-point number can be represented exactly in binary format and explains why(hint: binary representation of floating-point numbers).
#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

bool isExactlyRepresentable(float num) {
    int exponent;
    float mantissa = frexp(num, &exponent);
    
    while (mantissa != floor(mantissa) && exponent > -std::numeric_limits<float>::digits) {
        mantissa *= 2;
        exponent--;
    }
    
    return mantissa == floor(mantissa);
}

int main() {
    float num;
    
    cout << "Enter a floating-point number: ";
    cin >> num;
    
    if (isExactlyRepresentable(num)) {
        cout << num << " can be exactly represented in binary format." << endl;
    } else {
        cout << num << " cannot be exactly represented in binary format because it has a repeating binary fraction." << endl;
    }
    
    return 0;
}
