#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <algorithm>
#include <cmath>

int main(){
    std::string normalStr, secretStr = "";
    // a-z : 97-122
    // A-Z : 65-90
    std::cout << "Enter your string in uppercase : ";
    std::cin >> normalStr;

    for(char c: normalStr)
        secretStr += std::to_string((int)c - 23);

    std::cout << "Secret : " << secretStr << "\n";

    normalStr = "";

    for(int i=0; i<secretStr.length(); i+=2){
        std::string sCharCode = "";
        sCharCode += secretStr[i];
        sCharCode += secretStr[i+1];

        int nCharCode = std::stoi(sCharCode);
        char chCharCode = nCharCode + 23;
        normalStr += chCharCode;
    }

    
    std::cout << "Original : " << normalStr << "\n";

    return 0;
}