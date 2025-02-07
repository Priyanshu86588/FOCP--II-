//write a program to calculate the least common multiple (LCM) and greatest common divisor (GCD) of two integers.
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "GCD: " << gcd(num1, num2) << endl;
    cout << "LCM: " << lcm(num1, num2) << endl;
    
    return 0;
}
