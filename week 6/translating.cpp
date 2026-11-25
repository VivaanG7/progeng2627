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

void translate(const std::vector<std::string>& ad, const std::vector<std::string>& v3, const std::vector<std::string>& v4, std::vector<std::string>& out){
    for(int i = 0; i < ad.size(); i++){
        int pos = search_vector(ad[i], v3);
        if(pos != -1){
            out.push_back(v4[pos]);
        }
        else{
            out.push_back(ad[i]);
        }
    }
}

int main(){

    std::ifstream infile;
    infile.open("translatesentence.txt");

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    std::vector<std::string> v;
    while(infile >> tmp){
        v.push_back(tmp);
    }
    infile.close();

    std::ifstream innerfile;
    innerfile.open("translatetext.txt");

    if(!innerfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp2;
    std::vector<std::string> v2;
    while(innerfile >> tmp2){
        v2.push_back(tmp2);
    }
    innerfile.close();

    std::vector<std::string> v3;
    std::vector<std::string> v4;

    for(int i = 0; i < v2.size(); i++){
        if(i % 2 == 0){
            v3.push_back(v2[i]);
        }
        else{
            v4.push_back(v2[i]);
        }
    }

    std::vector<std::string> out;
    translate(v, v3, v4, out);

    std::ofstream outfile;
    outfile.open("output.txt");

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = 0; i < out.size(); i++){
        outfile << out[i] << " ";
    }
    outfile << std::endl;
    outfile.close();
}