//create a program to find the first number grater than 50 that is divisible by 7.
#include <iostream>

using namespace std;

int main() {
    int num = 60; 
    while (num % 7 != 0) {
        num++;
    }
    
    cout << "The first number greater than 50 that is divisible by 7 is: " << num << endl;
    
    return 0;
}
