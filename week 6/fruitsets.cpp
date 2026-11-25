#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == s){
            return i;
        }
    }
    return -1;
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1[i], vin2) != -1){
            vout.push_back(vin1[i]);
        }
    }
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for(int i = 0; i < vin2.size(); i++){
        if(search_vector(vin2[i], vout) == -1){
            vout.push_back(vin2[i]);
        }
    }
}

int main(){
    std::string name1, name2;
    std::cout << "enter name of first file" << std::endl;
    std::cin >> name1;
    std::cout << "enter name of second file" << std::endl;
    std::cin >> name2;

    std::ifstream infile1;
    infile1.open(name1);
    if(!infile1.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::vector<std::string> v1;
    std::string tmp;
    while(infile1 >> tmp){
        v1.push_back(tmp);
    }
    infile1.close();

    std::ifstream infile2;
    infile2.open(name2);
    if(!infile2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::vector<std::string> v2;
    while(infile2 >> tmp){
        v2.push_back(tmp);
    }
    infile2.close();

    std::vector<std::string> vunion;
    union_vector(v1, v2, vunion);
    std::ofstream outunion;
    outunion.open("union.txt");
    for(int i = 0; i < vunion.size(); i++){
        outunion << vunion[i] << std::endl;
    }
    outunion.close();

    std::vector<std::string> vinter;
    intersection_vector(v1, v2, vinter);
    std::ofstream outinter;
    outinter.open("intersection.txt");
    for(int i = 0; i < vinter.size(); i++){
        outinter << vinter[i] << std::endl;
    }
    outinter.close();
}