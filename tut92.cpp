#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <functional>


std::vector<int> GenerateRandVec(int size, int start, int stop);

std::vector<int> GenerateFibList(int amount);

int main(){
    // std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
    
    
    // int divisor;
    // std::vector<int> vecVals2;
    // std::cout << "List of Values Divisable by: ";
    // std::cin >> divisor;

    // std::copy_if(vecVals.begin(), vecVals.end(),
    //     std::back_inserter(vecVals2),
    //     [divisor](int x){return !(x%divisor);});

    // for(int item: vecVals2)
    //     std::cout << item << "\n";


    // std::vector<int> doubleVec;

    // std::for_each(vecVals.begin(), vecVals.end(),
    //     [&](int x){doubleVec.push_back(x*2);});

    // std::cout << std::string(2, '\n');
    

    // for(int item: doubleVec)
    //         std::cout << item << "\n";        


    // std::vector<int> vec1 = {1,2,3,4,5};
    // std::vector<int> vec2 = {1,2,3,4,5};
    // std::vector<int> vec3 = {1,2,3,4,5};
    // std::transform(vec1.begin(), vec1.end(),
    //     vec2.begin(), vec3.begin(),
    //     [](int x, int y){return x+y;});
    
    //     for(int item: vec3)
    //         std::cout << item << "\n";


    // int age = 19;
    // bool canIVote = (age >= 18) ? true : false;
    // std::cout.setf(std::ios::boolalpha);
    // std::cout << "Can Emilio vote: " << canIVote << "\n";  

    std::function<int(int)> Fib =
        [&Fib](int n) {return n < 2 ? n : Fib(n-1) + Fib(n-2);};

    std::cout << Fib(4) << "\n";

    std::vector<int> listOfFibs = GenerateFibList(10);
    for(auto val: listOfFibs)
        std::cout << val << "\n";
    

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

std::vector<int> GenerateFibList(int amount){
    std::vector<int> res = {0,1};
    while(amount > 2){
        res.push_back(res[res.size()-1] + res[res.size()-2]);
        amount--;
    }
    return res;
}