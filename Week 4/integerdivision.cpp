#include <iostream>

void calc(int a,int b, int& division, int& remainder){
    division = a/b;
    remainder = a % b;

}



int main(){
    int a,b;
    std::cout << "Give me two numbers and I will calculate integer sum and remainder" << std::endl;
    std::cin >> a >> b;
    int x,y ;
    calc(a,b,x,y);
    std::cout << x << " " << y << std::endl;

}