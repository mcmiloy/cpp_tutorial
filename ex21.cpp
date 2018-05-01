#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main() {

    std::cout << "enter age: " << std::endl;
    std::string sAge;

    getline(std::cin, sAge);

    int nAge = std::stoi(sAge);

    if(nAge == 5){
        std::cout << "Go to Kindergarten" << std::endl;
    }else if(nAge >= 6 && nAge <= 17){
        int nGrade = nAge - 5;
        std::cout << "Go to Grade: " << nGrade << std::endl;
    }else{
        std::cout << "Too Young for school" << std::endl;
    }





    return 0;
}
