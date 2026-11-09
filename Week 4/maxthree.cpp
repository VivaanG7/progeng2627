#include <iostream>

int compare( int one , int two , int three ){
    int result;
    if (one > two) {
        if (one > three){
            result = one;
        }
        else{
            result = three;
        }
    }
    else{
        if(two > three){
            result = two;
        }
        else{
            result = three;
        }

    }
    return result;
}

int main(){
    int a,b,c = 0;
    std::cout << " Pick two numbers to compare which one is bigger"<< std::endl;
    std:: cin >> a >> b >> c;
    std::cout << compare(a, b , c) << std::endl ;
}