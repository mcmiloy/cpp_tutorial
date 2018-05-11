#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <iterator>

template<typename T, typename U>
class Person{
public:
    T height;
    U weight;
    static int numOfPeople;
    Person(T h, U w){
        height = h, weight = w;
        numOfPeople++;
    }
    void GetData(){
        std::cout << "Height: " << height << " and Weight: " << weight << "\n";
    }

};

template<typename T, typename U> int Person<T,U>::numOfPeople;


int main(){

    Person<double, int> mikeTyson(5.83, 216);
    mikeTyson.GetData();
    std::cout << "Number of People: " << mikeTyson.numOfPeople << "\n"; //calling static with . instead of :: why?

    return 0;
}