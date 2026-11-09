#include <iostream>
#include <vector>
#include <cmath>

int min_vector_element(const std::vector<double>& vin){
    int j,i  = 0;
    int compare = vin[0];
    for(int i = 0 ; i < vin.size() ; i++){
        if(vin[i] < compare){
            compare = vin[i];
            j = i;
        }
    }
    return j;



}

int main(){
    std::vector<double> v{3, 0.5, -1};

    std::cout << min_vector_element(v) << std::endl;

}