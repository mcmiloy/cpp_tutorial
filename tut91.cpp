#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>
#include <algorithm>

std::vector<int> GenerateRandVec(int size, int start, int stop);

int main(){

    std::vector<int> vecVals = GenerateRandVec(10, 1, 50);

    std::sort(vecVals.begin(), vecVals.end(), [](int x, int y){return x<y;});

    for(auto val: vecVals)
        std::cout << val << "\n";

    std::cout << std::string(2, '\n');

    std::vector<int> evenVecVals;

    std::copy_if(vecVals.begin(), vecVals.end(), std::back_inserter(evenVecVals),
        [](int x){return !(x%2);});

    for(auto val: evenVecVals)
        std::cout << val << "\n";

    std::cout << std::string(2, '\n');


    int sum = 0;
    std::for_each(vecVals.begin(), vecVals.end(), [&](int x){sum += x;});

    std::cout << sum << "\n";

    return 0;
}









std::vector<int> GenerateRandVec(int size, int start, int stop){
    srand(time(NULL));

    std::vector<int> res;
    for(int i=0; i<size; ++i){
        int temp = start + (random() % (stop-start));
        res.push_back(temp);
    }
    return res;
}