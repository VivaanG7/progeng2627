#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int c = 0;
    int c2 = 0;

    // n times we draw one row
    // note that we need a different variable
    // for the loop counter
    while(c2 < n){
        c = 0;
        // the following loop draws one row
        while(c < n) {
            std::cout << "*"; 
            c += 1;
            // there is no << std::endl
            // because we want them on the same row
        }

        std::cout << std::endl;
        c2+= 1;
        // we go on a newline after each row

    }

}