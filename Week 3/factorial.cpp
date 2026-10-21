#include <iostream>

int main(){
    int n,result;
    std::cout << "Enter a number and I will calculate its factorial" << std::endl;
    std::cin >> n;
    result = n;

    for (int i = 0 ; i < n -1 ; i++) {
        result = result * (n - i - 1);
    }
    std::cout << "The value of your factorial is " << result << std::endl;

}    