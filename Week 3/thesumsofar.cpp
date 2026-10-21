#include <iostream>

int main(){
    int n = 1;
    int acc = 0;

    while (n != 0){

        std::cout << "Give me a number to add to the total" << std::endl;
        std::cin >> n;
        acc = n + acc;
         std::cout << "The sum so far is " << acc << std::endl;
    }
   std::cout << "The total is " << acc << std::endl;
}