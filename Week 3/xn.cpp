#include <iostream>

int main(){
    int n,counter,acc;
    std::cout << " Enter an initial number";
    std::cin >> n;
    std::cout << " Enter an number to multiply your initial number by that many times";
    std::cin >> counter;
    acc = n;
    for(int i = 0; i < counter - 1; i++){
        acc = acc*n;
    }
    std::cout << " Your number is " << acc << std::endl;
}