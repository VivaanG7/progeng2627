#include <iostream>
#include <string>

int main() {
    int low = 1;
    int high = 100;
    std::string feedback;

    std::cout << "Think of an integer between " << low << " and " << high << std::endl;
    std::cout << "For each guess, respond with:";
    std::cout << "  'h' if the guess is too HIGH ";
    std::cout << "  'l' if the guess is too LOW ";
    std::cout << "  'c' if the guess is CORRECT ";

    while (low <= high) {
   
        int guess = low + (high - low) / 2;

        std::cout << "Is your number " << guess << "? (h/l/c): ";
        std::cin >> feedback;

        if (feedback == "c") {
            std::cout << "found your number: " << guess << "\n";
            break;
        } else if (feedback == "h") {
  
            high = guess - 1;
        } else if (feedback == "l") {

            low = guess + 1;
        } else {
            std::cout << "Bruh what u doing? enter 'h', 'l', or 'c'";
        }
    }


}