#include <iostream>

int main(){
    int n = 1;
    double acc = 0;
    double counter = 0;

    while (n != 0){

        std::cout << "Give me a number to add to the total" << std::endl;
        std::cin >> n;
        acc = n + acc;
        counter = counter + 1;
        std::cout << "The average so far is " << acc/counter << std::endl;
    }
   std::cout << "The total is " << acc << std::endl;
}