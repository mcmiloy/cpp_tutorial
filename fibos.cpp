#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>

int fibos(int s1, int s2, int fibIndex);

int main(){
    int index;
    std::cout << "Get Fibonacci Index: ";
    std::cin >> index;

    std::cout << fibos(0, 1, index) << "\n";

    return 0;
}


int fibos(int s1, int s2, int fibIndex){
    if(fibIndex==1){
        return s2;
    } else {
        int temp = s1 + s2;
        int s1 = s2;
        int s2 = temp;
        return fibos(s1, s2, fibIndex - 1);
    }
}