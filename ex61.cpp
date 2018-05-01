#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <algorithm>

std::vector<int> FindSubstringMatches(std::string aString, std::string find);
std::vector<std::string> StringToVector(std::string theString, char separator);

int main(){
    std::string phrase = "To be or not to be";
    std::vector<int> matches = FindSubstringMatches(phrase, "be");

    for(auto item: matches)
        std::cout << item << std::endl;

    return 0;
}


std::vector<int> FindSubstringMatches(std::string aString, std::string find){
    std::vector<int> res;
    std::vector<std::string> vecstring;

    vecstring = StringToVector(aString, ' ');
    for(int i=0; i<vecstring.size(); ++i){
        if(vecstring[i]==find) res.push_back(i);
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