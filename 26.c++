//write a program to generate and display the first n prime number using a combination of for and while loops.
#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) return false;
        i++;
    }
    return true;
}

int main() {
    int n, count = 0, num = 2;
    
    cout << "Enter the number of prime numbers to generate: ";
    cin >> n;
    
    cout << "First " << n << " prime numbers: ";
    
    for (int found = 0; found < n; num++) {
        if (isPrime(num)) {
            cout << num << " ";
            found++;
        }
    }
    
    cout << endl;
    return 0;
}
