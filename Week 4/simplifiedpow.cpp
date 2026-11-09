#include <iostream>

double mypow(double base, int exp){
    double result; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    result = 1.0;
    if (exp >= 0){
        for (int i = 0 ; i < exp ; i++){
            result = result * base;
        }
    }
    else{
            exp = exp * (-1);
            for (int i = 0 ; i < exp ; i++){
            result = result * base;
        }
        result = 1.0 / result;
    }

    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

int main(){
    // we test examples with integer (and non-negative) exponent
    int base,exp = 0;
    std::cin >> base >> exp;
    std::cout << mypow(base,exp) << std::endl;
}