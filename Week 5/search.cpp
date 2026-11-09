#include <iostream>
#include <vector>
#include <cmath>

int search_vector(int n, const std::vector<double>& vin){
    for(int i = 0 ; i < vin.size(); i++){
        if(vin[i] == n){
            return i;
        }

    }
    return -1;
}


int main(){
    std::vector<double> v{3, 0.5, -1};
    int n = 0;
    std::cout << "What number do you wanna search for?"<< std::endl ;
    std::cin >> n;

    std::cout << search_vector(n,v) << std::endl;

}