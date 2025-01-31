//write a program to evaluate (a^b+c*d) where a,b,c &d are user inputs . explain the presence of bitwise operators in the program.
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
