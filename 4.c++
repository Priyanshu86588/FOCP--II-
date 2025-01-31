//take two floating point numbers as input and display their division result with two decimal places
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a,b;
    cin >> a >> b;
    float c=a/b;
    cout<< fixed<<setprecision(2)<<c;
    return 0;
}