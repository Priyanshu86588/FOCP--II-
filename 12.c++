//write a program that solves a quadratic equation(ax^+bx+c=0) using conditional statements to handle all possible cases 
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    
    // Taking user input
    cout << "Enter values for a, b, c, and d: ";
    cin >> a >> b >> c >> d;

    // Evaluating the expression (a^b + c*d)
    int result = (a ^ b) + (c * d);

    // Displaying the result
    cout << "Result of (a^b + c*d) = " << result << endl;

    return 0;
}
