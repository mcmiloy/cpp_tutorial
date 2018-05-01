#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main() {
    std::vector<int> vecnRandNums(2);
    vecnRandNums[0] = 10;
    vecnRandNums[1] = 10;
    vecnRandNums.push_back(30);
    std::cout << "Last Index : " <<
        vecnRandNums[vecnRandNums.size() -1] << "\n";

    std::string sSentence = "This is a random string";
    std::vector<std::string> vecsWords;
    std::stringstream ss(sSentence);
    std::string sIndivStr;

    char cSpace = ' ';
    while(getline(ss, sIndivStr, cSpace)){
        vecsWords.push_back(sIndivStr);
    }

    for(int i =0; i<vecsWords.size(); ++i){
        std::cout << vecsWords[i] << "\n";
    }

    return 0;
}