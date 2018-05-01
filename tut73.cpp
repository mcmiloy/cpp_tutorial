#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <stdlib.h>
#include <time.h>


std::vector<int> GenerateRandVec(int size, int start, int stop);

int main(){
    std::vector<int> vecVals = GenerateRandVec(10, 5, 50);
    for(auto x: vecVals)
        std::cout << x << "\n";



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
