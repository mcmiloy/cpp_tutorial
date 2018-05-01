#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <algorithm>


std::vector<std::string> StringToVector(std::string theString, char separator);
std::string VectorToString(std::vector<std::string> theVector, char separator);

int main(){
    // std::vector<std::string> vec =
    //     StringToVector("This is a random string", ' ');

    // for(int i=0; i<vec.size(); i++){
    //     std::cout << vec[i] << "\n";
    // } 

    std::vector<std::string> vCusts(3);
    vCusts[0] = "Bob";
    vCusts[1] = "Sue";
    vCusts[2] = "Tom";

    std::string sCusts = VectorToString(vCusts, ' ');
    std::cout << sCusts << "\n";

    return 0;
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
