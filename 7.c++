//write a program to swap two numbers without using a temporary variable. and then without using a temporary variable.
#include<iostream>
using namespace std;
int main(){
  

int a,b,c;

  //cout<<"Before Swapping ->"<<endl;

  cout<<"ENTER NO A: "<<endl;
  cin>>a;
  
  cout<<"ENTER NO B: "<<endl;
  cin>>b;
  
  c=a;
  a=b;
  b=c;

  cout<<"After Swapping ->"<<endl;

  cout<<"A: "<<a<<endl;
  cout<<"B: "<<b<<endl;

  //Without using temporary variable

  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"A: "<<a<<endl<<"B: "<<b<<endl;
  return 0;
  }