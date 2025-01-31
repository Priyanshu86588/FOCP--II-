//write a program that takes user full name and age as input and displays a greeting with the name and the number of days they have lived.
#include <iostream>
using namespace std;
int main(){

string name;
  int age;
  
  cout<<"Enter your Name-> "<<endl;
  cin>>name; 

  cout<<"Enter your Age-> "<<endl;
  cin>>age;
  
  cout<<"Hello "<<name<<" you lived "<<age*365<<" days "<<endl;
  return 0;
  }