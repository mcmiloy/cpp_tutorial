#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> myVec(10);
    std::iota(std::begin(myVec), std::end(myVec), 0);
    
    for(int i=0; i<myVec.size(); i++){
        std::cout << myVec[i] << "\n";
    }

    for(auto y: myVec) std::cout << y << "\n";

    int val = 8;
    if((val % 2) == 0){
        std::cout << val << " is even\n";
    } else {
        std::cout << val << " is odd\n";
    }

    return 0;
}