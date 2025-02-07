//create a program that finds and dispays all Armstong numbers within a given range using nested loops. 
#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    return sum == num;
}

int main() {
    int start, end;
    
    cout << "Enter the range (start and end): ";
    cin >> start >> end;
    
    cout << "Armstrong numbers in the range: ";
    
    for (int num = start; num <= end; num++) {
        if (isArmstrong(num)) {
            cout << num << " ";
        }
    }
    
    cout << endl;
    return 0;
}
