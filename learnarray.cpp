#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>


int main() {
    int arrNums[10] = {1};

    int arrNum2[] = {1,2,3};

    int arrNums3[5] = {8,9};

    std::cout << "1st Value : " << arrNums3[0] << "\n";
    arrNums3[0] = 7;
    std::cout << "1st Value : " << arrNums3[0] << "\n";

    std::cout << "Array size : " << sizeof(arrNums3) / sizeof(*arrNums3) << "\n"; 

    int arrnNums4[2][2][2] = {{{1,2}, {3,4}},
                              {{5,6}, {7,8}}};  

    std::cout << arrnNums4[1][1][1] << "\n";

    return 0;
}