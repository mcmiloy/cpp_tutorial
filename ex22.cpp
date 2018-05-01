#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main() {
    std::string sUserInput;
    std::cout << "please enter {num} {opp} {num}: ";
    getline(std::cin, sUserInput);

    std::stringstream ss(sUserInput);
    std::string sIndivStr;

    std::vector<std::string> input_vector;
    char cSpace = ' ';

    while(getline(ss, sIndivStr, cSpace)){
        input_vector.push_back(sIndivStr);
    } 

    if(input_vector[1]=="+"){
        std::cout << input_vector[0] << " + " << input_vector[2] << " = " <<
            stoi(input_vector[0]) + stoi(input_vector[2]) << std::endl;
    }else if(input_vector[1]=="-"){
        std::cout << input_vector[0] << " - " << input_vector[2] << " = " <<
            stoi(input_vector[0]) - stoi(input_vector[2]) << std::endl;
    }else if(input_vector[1]=="*"){
        std::cout << input_vector[0] << " * " << input_vector[2] << " = " <<
            stoi(input_vector[0]) * stoi(input_vector[2]) << std::endl;
    }else if(input_vector[1]=="/"){
        std::cout << input_vector[0] << " / " << input_vector[2] << " = " <<
            stoi(input_vector[0]) / stoi(input_vector[2]) << std::endl;
    }else{
        std::cout << "I only know following operators: +,-,*,/" << std::endl;
    }

    return 0;
}