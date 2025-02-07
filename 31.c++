//develop a program that reverse the digits of a given number and terminate early if the reversed number becomes a palindrome.
#include <iostream>

using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    while (true) {
        num = reverseNumber(num);
        cout << "Reversed number: " << num << endl;
        
        if (isPalindrome(num)) {
            cout << "Palindrome detected! " << endl;
            break;
        }
    }
    
    return 0;
}
