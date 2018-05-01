#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

int main() {
    // double num1 = 0, num2 = 0;

    // std::cout << "Enter number 1 : ";
    // std::cin >> num1;
    // std::cout << "Enter number 2: ";
    // std::cin >> num2;

    // try{
    //     if(num2 == 0){
    //         throw "Division by zero is not possible";
    //     } else {
    //         printf("%.1f / %.1f = %.2f\n", num1, num2, (num1 / num2));
    //     }
    // }
    // catch(const char* exp){
    //     std::cout << "Error : " << exp << "\n";
    // }

    // try{
    //     std::cout << "Throwing exception\n";
    //     throw std::runtime_error("Error Occured");
    //     std::cout << "Can you print me?\n";
    // }
    // catch(std::exception &exp){
    //     std::cout << "Handled Exception: " <<
    //         exp.what() << "\n";
    // }
    // catch(...){
    //     std::cout << "Default Exception\n";
    // }

    srand(time(NULL));
    int secretNum = std::rand() % 11;
    int guess;
    // std::cout << guess << std::endl;

    do{
        std::cout << "Guess the number(0 to 10): ";
        std::cin >> guess;
        if(guess > secretNum) std::cout << "To big.\n";
        if(guess < secretNum) std::cout << "To small.\n";
    } while(secretNum != guess);
    std::cout << "You guessed right!\n";



    return 0;
}