#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

bool isPrime(int num);
std::vector<int> GetPrimes(int maxPrime);

int main(){
    int num=0;
    std::cout << "Number to Check: ";
    std::cin >> num;

    std::cout << "Is " << num << " Prime: " << isPrime(num) << "\n";

    std::cout << "Generate Primes up to: ";
    int maxPrime;
    std::cin >> maxPrime;
    std::vector<int> primeList = GetPrimes(maxPrime);
    for(auto x: primeList)
        std::cout << x << "\n";


    return 0;
}

bool isPrime(int num){
    for(int i=2; i<num; ++i){
        if(num%i==0)
            return false;
    }
    return true;
}

std::vector<int> GetPrimes(int maxPrime){
    std::vector<int> res;
    for(int i=2; i<=maxPrime; ++i){
        if(isPrime(i))
            res.push_back(i);
    }
    return res;
}