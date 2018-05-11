#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <functional>



bool IsItOdd(int num){
    return num%2;
}

std::vector<int> ChangeList(std::vector<int> inpList, std::function<bool(int)> boolFunc){
    std::vector<int> res;
    for(int i=0; i<inpList.size(); ++i){
        if(boolFunc(inpList[i])) res.push_back(inpList[i]);
    }
    return res;
}


int main(){

    std::vector<int> listOfNums {1,2,3,4,5};
    std::vector<int> oddList = ChangeList(listOfNums, IsItOdd);



    std::cout << "List of Odds\n";
    for(auto i: oddList){
        std::cout << i << "\n";
    }


    return 0;
}