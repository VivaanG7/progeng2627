#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>


int count_occurences(std::string s , const std::vector<std::string>& v){
    int count = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == s){
            count++;
        }
    }
    return count;
}

int main(){

    std::vector<std::string> text ;
    std::vector<std::string> words ;

    std::string tmp;
    std::string tmp2;

    std::ifstream infile ;
    std::ifstream innerfile;
    
    infile.open("text.txt");

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while(infile >> tmp){
        text.push_back(tmp);
    }

        
    innerfile.open("words.txt");

    if(!innerfile.is_open()){
    std::cout << "error opening file" << std::endl;
    return EXIT_FAILURE;
    }
    while(innerfile >> tmp2){
        words.push_back(tmp2);
    }


    std::ofstream outfile;
    outfile.open("output.txt");

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i = 0; i < words.size(); i++){
        outfile << words[i] << ": " << count_occurences(words[i], text) << std::endl;
    }
    outfile.close();

}