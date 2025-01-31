//develop a program that checks if  a triangle is valid based on the lengths of its sides and determines its type (equilateral , isoceles & scalene) using nested if else statements.
#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    // Input three sides of the triangle
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check if the triangle is valid (Triangle Inequality Theorem)
    if (a + b > c && a + c > b && b + c > a) {
        cout << "The given sides form a valid triangle.\n";

        // Check the type of triangle
        if (a == b && b == c) {
            cout << "It is an Equilateral triangle (all sides are equal).\n";
        } else {
            if (a == b || b == c || a == c) {
                cout << "It is an Isosceles triangle (two sides are equal).\n";
            } else {
                cout << "It is a Scalene triangle (all sides are different).\n";
            }
        }
    } else {
        cout << "The given sides do NOT form a valid triangle.\n";
    }

    return 0;
}
