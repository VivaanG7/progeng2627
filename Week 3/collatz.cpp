#include <iostream>

int main(){
    int n;
    std::cout << "Give me a number and I will give the Collatz conjecture"<< std::endl;
    std::cin >> n;

    while (n != 1){
        if (n % 2 == 0){
            n = n/2;
            std::cout << n << " ";
            
        }
        else{
            n = 3*n + 1;
            std::cout << n << " ";
            
        }

    }
}