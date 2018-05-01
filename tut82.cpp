#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>


int Factorial(int number);
void PrintArray(int *numbers);

void ExpArrayPass(int *ary, int arysize);

int main(){
    std::cout << Factorial(6) << "\n";
    
    std::cout << std::string(10, '-') << "\n";

    int myary[5] = {1,2,3,4,5};
    std::cout << sizeof(myary) << "\n";

    ExpArrayPass(myary, sizeof(myary)/sizeof(*myary));

    return 0;
}


int Factorial(int number){
    if(number<2){
        return 1;
    } else {
        return number * Factorial(number-1);
    }
}


void PrintArray(int *numbers){
    int arysize = (sizeof(numbers)/sizeof(*numbers));
    std::cout << arysize << "\n";

    std::cout << std::string(arysize*3, '-');

    for(int i=0; i<arysize; ++i)
        std::cout << i;
    std::cout << "\n";
    std::cout << std::string(arysize*3, '-');
    

    for(int i=0; i<arysize; ++i){
        std::cout << *numbers;
        numbers++;
    }
}

void ExpArrayPass(int *ary, int arysize){
    for(int i=0; i<arysize; ++i)
        std::cout << i;
    std::cout << "\n";
    for(int i=0; i<arysize; ++i){
        std::cout << *ary;
        ary++;
    }
    std::cout << "\n";    
}