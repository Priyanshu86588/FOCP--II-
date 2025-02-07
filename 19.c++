//write a program that calculates the grade of a student based on their marking using if else/switch statement.
#include <iostream>
using namespace std;

int main() {
    int marks;
    
    cout << "Enter the student's marks: ";
    cin >> marks;
    
    char grade;
    
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    
    cout << "The student's grade is: " << grade << endl;
    
    return 0;
}
