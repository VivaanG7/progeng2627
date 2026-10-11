#include <iostream>

int main (){
    double temp;
    std::cout << "What is the temperature of the area in celsius?" << std::endl;
    std::cin >> temp;
    std::cout << "The temperature of your area in farenheit is" << " " << (temp * 1.8) + 32 << std::endl;

}