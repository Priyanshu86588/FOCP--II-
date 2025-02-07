#include <iostream>

bool areOppositeSigns(int a, int b) {
    
    return ((a ^ b) < 0);
}

int main() {
    int num1, num2;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    if (areOppositeSigns(num1, num2)) {
        std::cout << num1 << " and " << num2 << " have opposite signs." << std::endl;
    } else {
        std::cout << num1 << " and " << num2 << " do not have opposite signs." << std::endl;
    }

    return 0;
}