//write a program to generate the first n fibonacci numbers using a for loop.
#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;
    
    int first = 0, second = 1, next;
    
    cout << "Fibonacci Series: ";
    
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    
    cout << endl;
    
    return 0;
}
