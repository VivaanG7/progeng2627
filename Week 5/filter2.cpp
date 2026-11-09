#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i = 0; i < vin.size(); ++i){
        if(vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}    



int main(){
    int size = 0;
    double total,t = 0;
    std::vector<double> v1{};
    std::cout << "How many elements do you want this vector to be?";
    std::cin >> size;
    for(int i = 0; i < size ; i++){
        std::cout << "What number would you like to add to the vector?";
        std::cin >> total;
        v1.push_back(total);
    }
    std::cout << "What number do u want the vector to be compared to?";
    std:: cin >> t;

    std::vector<double> vout{};

    filter_v(v1, t, vout);

    for(int i = 0; i < vout.size(); ++i){
        std::cout << vout[i] << " ";
    }


}