#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


int main() {
    // km = miles * 1.60934
    // Enter Miles : 5
    // 5 miles equals 8.0467 kilometers

    std::string qst ("Enter miles: ");
    std::string miles;
    std::cout << qst;
    getline(std::cin, miles);
    std::cout << miles << std::endl;

    int mil = std::stoi(miles);

    printf("%d equals %4f kilometers\n", mil, mil*1.60934);


    return 0;
}


int someint(int i, int j) {
  return i + j;
}
