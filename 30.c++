//write a program that prints all numbers between 1 and 500, skipping numbers divisible by both 3 and 7. stop printing numbers if sum of printed numbers exceeds 1000.
#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    
    for (int num = 1; num <= 500; num++) {
        if (num % 3 == 0 && num % 7 == 0) {
            continue; 
        }
        
        sum += num;
        cout << num << " ";
        
        if (sum > 1000) {
            break;
        }
    }
    
    cout << "\nSum exceeded 1000, stop." << endl;
    
    return 0;
}
