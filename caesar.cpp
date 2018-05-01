#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>



std::string caesar(std::string sInput, int iShift);

int main(){
    int a = 97;
    std::cout << (char)a << std::endl;
    char b = 'b';
    std::cout << (int)b << std::endl;

    std::string temp = caesar("Hello World", 3);
    std::cout << temp << "\n";
    std::cout << caesar(temp, -3) << "\n";
    return 0;
}

std::string caesar(std::string sInput, int iShift){
    std::vector<int> temp;
    std::string res;
    for(char& c: sInput){
        temp.push_back((int)c);
    }
    for(int i=0; i<temp.size(); ++i){
        temp[i] += iShift;
    }
    // for(auto item: temp){
    //     std::cout << item << "\n";
    // }
    for(auto item: temp){
        res.push_back(item);
    }
    return res;
}
