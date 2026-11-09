#include <iostream>
#include <cmath>

int main(){
    int x,n,total = 0;
    std::cout << "Give me a value x for the base and a number n in order to caluclate the sum of powers" << std::endl;
    std::cin >> x >> n ;
    
    for (int i = 1 ; i < n + 1 ; i++){
        total = total + std::pow(x,i);
    }

    std::cout << "The value of your sum of powers is " << total << std::endl;
}