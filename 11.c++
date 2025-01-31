//create a program to count the number of 1 bits an integer input by the user.
#include <iostream>
using namespace std;
int main(){

 int num, count = 0;

    cout << "Enter an integer: ";
    cin >> num;


    while (num != 0) {
        
        count += (num & 1);
        
        num >>= 1;
    }


    cout << "The number of 1 bits is: " << count << endl;
return 0;
}