//create a program that continuously accepts user input of integers until the user types "exit". At the end display:
#include <iostream>
#include <climits>
using namespace std;

int main() {
    string input;
    int sum = 0, count = 0, num, maxNum = INT_MIN, minNum = INT_MAX;
    
    
    
    while (cin >> input && input != "exit") {
        try {
            num = stoi(input);
            sum += num;
            count++;
            maxNum = max(maxNum, num);
            minNum = min(minNum, num);
        } catch (...) {
            cout << "Invalid input. Please enter an integer or 'exit'.\n";
        }
    }
    
    if (count > 0) {
        cout << "\nSum: " << sum << "\nCount: " << count << "\nMax: " << maxNum << "\nMin: " << minNum << "\n";
    } else {
        cout << "No valid integers were entered.\n";
    }
    
    return 0;
}