//write a program that calculates the area and perimeter of a rectangle using user provided length and width as input.

#include <iostream>
using namespace std;
int main(){

int width,length;
  cout<<"Enter length: "<<endl;
  cin>>length;
  cout<<"Enter width: "<<endl;
  cin>>width;
  int area,parameter;
  area=length*width;
  parameter=2*(length + width);
  cout<<"Area: "<<area<<endl<<"parameter: "<<parameter<<endl;
  return 0;
  }