#include <iostream>

int main() {
    int number;
    long long product = 1;
    int originalNumber;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    originalNumber = number;

    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        product = 0;
    } else {
        while (number > 0) {
            int digit = number % 10;
            product = product * digit;
            number = number / 10;
        }
    }

    std::cout << "\nThe product of the digits of " << originalNumber << " is: " << product << std::endl;

    return 0;
}