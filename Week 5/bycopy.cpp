#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int total, ans = 0 ; 

    std::cout << "How big do you want your vector to be?" ; 
    std:: cin >> total ; 

    for(int i = 0 ; i < total ; i++ ){
            std::cout << "Gimme a number to add to the vector" ; 
            std:: cin >> ans ; 
            v.push_back(ans);

    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}