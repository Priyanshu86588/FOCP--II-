//create a program that makes butterfly pattern in given number n.
#include <iostream>
using namespace std;

void printButterfly(int n) {
    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    
    for (int i = n; i >= 1; i--) {
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the butterfly pattern: ";
    cin >> n;
    printButterfly(n);
    return 0;
}
