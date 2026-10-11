#include <iostream>

int main () {
     double width,length;

     std::cout << "Give me the width of your rectangle ";
     std::cin >> width;

     std::cout << "Give me the length of your rectangle ";
     std::cin >> length;

     std::cout << "The perimter of your rectangle is " << 2*(width + length) << std::endl;
     std::cout << "The perimter of your rectangle is " << width*length << std::endl;
}