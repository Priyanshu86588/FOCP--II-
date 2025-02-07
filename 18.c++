//develope a program that performs a circular left and right shift of bits on a given integer and dispays the result.
#include <iostream>
using namespace std;
unsigned int circularLeftShift(unsigned int num, int shift, int bitSize) {
    return (num << shift) | (num >> (bitSize - shift));
}


unsigned int circularRightShift(unsigned int num, int shift, int bitSize) {
    return (num >> shift) | (num << (bitSize - shift));
}

int main() {
    unsigned int num;
    int shift;
    const int BIT_SIZE = 32;

    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "Enter shift amount: ";
    cin >> shift;
    
    unsigned int leftShifted = circularLeftShift(num, shift, BIT_SIZE);
    unsigned int rightShifted = circularRightShift(num, shift, BIT_SIZE);
    
    cout << "Original number: " << num << endl;
    cout << "After circular left shift: " << leftShifted << endl;
    cout << "After circular right shift: " << rightShifted << endl;
    
    return 0;
}
