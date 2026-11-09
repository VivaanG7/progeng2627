#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){

    // 2. Copy elements from vin1
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }

    // 3. Copy elements from vin2
    for(int i = 0; i < vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}


int main(){
    std::vector<int> v1{1, 7, 3 ,4};
    std::vector<int> v2{2,-2,19};
    std::vector<int> v_out;

    append_vectors(v1, v2, v_out);
    for(int i = 0; i < v_out.size(); i++){
        std::cout << v_out[i] << " ";
    }  

}