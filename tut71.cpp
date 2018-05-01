#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

std::string VectorToString(std::vector<std::string> theVector, char separator);
std::vector<std::string> StringToVector(std::string theString, char separator);
void SolveForX(std::string equation);


int main(){
    std::cout << "Enter an equation to solve: ";
    std::string equation = "";
    getline(std::cin, equation);
    SolveForX(equation);
    
    
    return 0;
}
// x + 4 = 9

void SolveForX(std::string equation){
    std::vector<std::string> vecEquation =
        StringToVector(equation, ' ');
    int num1 = std::stoi(vecEquation[2]);
    int num2 = std::stoi(vecEquation[4]);
    int xVal = num2 - num1;`
    std::cout << "x = " << xVal << "\n";
}





std::string VectorToString(std::vector<std::string> theVector, char separator){
    std::string res;
    for(std::string y: theVector){
        res += y;
        res.push_back(separator);
    }
    return res;
}


std::vector<std::string> StringToVector(std::string theString, char separator){
    std::vector<std::string> vecsWords;

    std::stringstream ss(theString);
    std::string sIndivStr;
    while(getline(ss, sIndivStr, separator)){
        vecsWords.push_back(sIndivStr);
    }
    return vecsWords;
}
