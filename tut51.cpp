#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <algorithm>

int main() {
    char cString[] = {'A', ' ', 'S', 't', 'r', 'i', 'n', 'g', '\0'};

    std::cout << "Array Size " << sizeof(cString) << "\n";
    std::cout << cString << "\n";


    std::vector<std::string> strVec(10);

    std::string str("I'm a string");
    strVec[0] = str;

    std::cout << str.front() << " " << str.back() << "\n";
    std::cout << "Length " << str.length() << "\n";
    std::string str2(str);
    strVec[1] = str2; 
    std::string str3(str, 4);
    strVec[2] = str3; 
    std::string str4(5, 'x');
    strVec[3] = str4;
    strVec[4] = str.append(" and you're not");
    str += " and you're not";
    str.append(str, 34, 37);
    strVec[5] = str;
    str.erase(13, str.length() - 1);
    strVec[6] = str;

    if(str.find("stsing") != std::string::npos)
        std::cout << "1st index " << str.find("string") << "\n";

    std::cout << "Substr " << str.substr(6, 6) << "\n";

    std::reverse(str.begin(), str.end());
    std::cout << "Reverse " << str << "\n";

    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    std::cout << "Upper " << str2 << "\n";

    // a-z : 97-122
    // A-Z : 65-90
    char aChar = 'A';
    int aInt = aChar;
    std::cout << "A Code" << (int)'a' << "\n";

    std::string strNum = std::to_string(1+2);
    std::cout << "String " << strNum << "\n";



    // for(auto y: strVec){
    //     std::cout << y << "\n";
    // }
    


    return 0;
}