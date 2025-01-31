//create a progrAM that reads a user name and age, then outputs. "Hello [name], you are [age] years old!"
#include <iostream>
using namespace std;
int main() {
    char name[50];    
    int age;    

    
    cout << "Enter your name: ";
    cin.getline(name, 50); 

    cout << "Enter your age: ";
    cin >> age;


    cout << "Hello " << name << ", you are " << age << " years old!" << std::endl;

    return 0;
} 



