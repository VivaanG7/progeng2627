#include <iostream>
#include <vector>

int main() {
    int n,store,t, total = 0 ;
    std::vector<int> v;
    std::vector<int> occur;
    std::cout<< "What size of vector do u want it to be?";
    std::cin >> n ;
    for(int i = 0 ; i < n; i++){
        std::cout<< "Gimme a number to add to my vector: ";
        std::cin >> store ;
        v.push_back(store); 
    }
    std::cout<< "What number do u want the vector to check?";
    std::cin >> t ;

    for (std::size_t i = 0; i < v.size(); i++) {
        if (t == v[i]) {
            total = total + 1;
            occur.push_back(i); 
        }
    }
    std::cout << "There are " << total << " occurrence/s of your number.\n";

  
    for (int i = 0; i < occur.size(); i++) {
        std::cout << "One of the occurrences was at index " << occur[i] << std::endl;
    }

}
