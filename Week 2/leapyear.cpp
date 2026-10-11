
#include <iostream>

int main() {
    int year;

    std::cout << "please enter a year: " << std::endl;
    std::cin >> year;

    if ((year % 4) == 0) {
        // If multiple of 4

        if ((year % 100) == 0) {
            // If also multiple of 100

            if ((year % 400) == 0) {
                std::cout << "Leap year" << std::endl;
            }
            else {
                std::cout << "Not a leap year" << std::endl;
            }

        }
        else {
            // Multiple of 4 but not 100
            std::cout << "Leap year" << std::endl;
        }
    }
    else {
        // Not a multiple of 4
        std::cout << "Not a leap year" << std::endl;
    }

    return 0;
}