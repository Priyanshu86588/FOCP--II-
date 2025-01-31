// write a program that calculates the compound interest for a given principal amount, rate of interest, time period, using constants where necessary
#include <iostream>
#include <cmath>
const int TIMES_COMPOUNDED_PER_YEAR = 1; 

int main() {
   
    double principal, rate, time;

  
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the annual rate of interest (in %): ";
    std::cin >> rate;

    std::cout << "Enter the time period (in years): ";
    std::cin >> time;

   
    double amount = principal * pow(1 + (rate / (100 * TIMES_COMPOUNDED_PER_YEAR)), TIMES_COMPOUNDED_PER_YEAR * time);
    double compoundInterest = amount - principal;


    std::cout << "The compound interest is: " << compoundInterest << std::endl;
    std::cout << "The total amount after " << time << " years is: " << amount << std::endl;

    return 0;
}
    