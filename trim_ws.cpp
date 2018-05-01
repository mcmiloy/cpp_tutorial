#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <algorithm>



std::string TrimWhitespace(std::string theString);

int main(){
    std::string aStr = "     Just some random words       ";
    aStr = TrimWhitespace(aStr);
    std::cout << "*" << aStr << "*\n";

    return 0;
}


std::string TrimWhitespace(std::string theString){
    std::string whitespaces(" \t\f\n\r");
    theString.erase(theString.find_last_not_of(whitespaces) + 1);
    theString.erase(0, theString.find_first_not_of(whitespaces));
    return theString;
}