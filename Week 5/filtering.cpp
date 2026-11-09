#include <iostream>
#include <vector>

int main() {
    int n,store,t ;
    std::vector<int> v;
    std::cout<< "What size of vector do u want it to be?";
    std::cin >> n ;
    for(int i = 0 ; i < n; i++){
        std::cout<< "Gimme a number to add to my vector";
        std::cin >> store ;
        v.push_back(store); 
    }
    std::cout<< "What number do u want the vector to be compared to?";
    std::cin >> t ;

    for(int i = 0 ; i < v.size() ; i++){
        if (t > v[i]){
            std:: cout <<  v[i] << std::endl;
        }
    }
}