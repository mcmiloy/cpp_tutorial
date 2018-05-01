#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

double AddNumbers(double num1, double num2);

void AssignAge(int age);
int AssignAge2(int age);

int main() {
    int age = 43;
    AssignAge(age);
    std::cout << "New Age " << age << "\n";

    age = AssignAge2(age);
    std::cout << "Returned Age " << age << "\n";

    // double num1, num2;
    // std::cout << "Enter Num1: ";
    // std::cin >> num1;
    // std::cout << "Enter Num2: ";
    // std::cin >> num2;
    // printf("%.1f + %.1f = %.1f\n",
    //     num1, num2, AddNumbers(num1, num2));

}



// FUNCTIONS
double AddNumbers(double num1, double num2){
    return num1 + num2;
}

void AssignAge(int age){
    age = 24;
}

int AssignAge2(int age){
    age = 24;
    return age;
}


// END FUNCTIONS