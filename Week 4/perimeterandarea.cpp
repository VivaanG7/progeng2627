#include <iostream>

void calculation(double width, double height, double& perimeter, double& area){

    perimeter = (width + height)*2;
    area = width * height;

}

int main(){
    double a,b;
    std::cin >> a >> b;
    double perimeter, area;
    calculation(a,b,perimeter,area);

    std::cout << perimeter << " " << area << std::endl;
}