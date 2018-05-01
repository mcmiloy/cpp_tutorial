#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::vector<int> Range(int start, int max, int step);

int main() {
    //std::vector<int> range = Range(1, 10, 2);
    
    //for(auto y: range) { std::cout << y << "\n"; }

    double investment;
    double interestRate;
    std::cout << "How much to invest" << "\n";
    std::cin >> investment;
    std::cout << "Interest Rate: " << "\n";
    std::cin >> interestRate;
    interestRate *= .01;
    for(auto y: Range(1, 10, 1)){
        investment += (investment * interestRate);
    }
    std::cout << "Value after 10 years: " << investment << "\n";

    return 0;
}


//FUNCTIONS
std::vector<int> Range(int start, int max, int step){
    int i = start;
    std::vector<int> range; 
    while(i <= max){
        range.push_back(i);
        i += step;
    }
    return range;
}