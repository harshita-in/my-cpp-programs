#include <iostream>

int main() {
    int limit;
    int sum = 0;
    int i = 1;

    std::cout << "Enter the upper limit (N) to find the sum of even numbers up to N: ";
    std::cin >> limit;

    while (i <= limit) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
        i++;
    }

    std::cout << "The sum of all even numbers from 1 to " << limit << " is: " << sum << std::endl;

    return 0;
}