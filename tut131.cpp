#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <functional>

double MultBy2(double num){
    return num*2;
}

double DoMath(std::function<double(double)> func,
    double num){
        return func(num);
}

double MultBy3(double num){
    return num*3;
}

int main(){
    std::function<double(double)> times2 = MultBy2; // auto times2 = MultBy2 also works
    std::cout << "5 * 2 = " <<
        times2(5) << "\n";
    
    std::cout << "6 * 2 = " <<
        DoMath(times2, 6) << "\n";

    std::vector<std::function<double(double)>> funcs(2);
    funcs[0] = MultBy2;
    funcs[1] = MultBy3;
    std::cout << "2 * 10 = " << funcs[0](10) << "\n";

    return 0;
}