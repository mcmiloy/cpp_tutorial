#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main() {

    std::string sAge = "0";
    std::cout << "Enter your age: ";
    getline(std::cin, sAge);
    int nAge = std::stoi(sAge);

    if ((nAge >= 1) && (nAge <= 18)){
        std::cout << "Important Birthday\n";
    } else if ((nAge == 21) || (nAge == 50)){
        std::cout << "Important Birthday\n";
    } else {
        std::cout << "Not an Important Birthday\n";
    }
    



    return 0;
}