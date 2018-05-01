#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <stdlib.h>
#include <time.h>

std::vector<int> GenerateRandVec(int size, int start, int stop);

void BubbleSort(std::vector<int>& theVec);

int main(){
    std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
    BubbleSort(vecVals);
    for(auto x: vecVals)
        std::cout << x << "\n";

    return 0;
}








void BubbleSort(std::vector<int>& theVec){
    int i = theVec.size() - 1;

    while(i >= 1){
        int j = 0;

        while(j<i){
            printf("\nIs %d > %d\n",  theVec[j], theVec[j+1]);

            if(theVec[j] >= theVec[j+1]){
                std::cout << "Switch\n";

                int temp = theVec[j];
                theVec[j] = theVec[j+1];
                theVec[j+1] = temp;
            } else {
                std::cout << "Don't Switch\n";
            }
            j++;

            for(auto k: theVec){
                std::cout << k << ", ";
            }
        }
        std::cout << "\nEnd of Round\n";
        i--;
    }
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