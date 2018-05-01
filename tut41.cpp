#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>


void PutNChar(int n, char c);

int main() {
    // int i = 1;

    // while(i<=20){
    //     if(i%2==0){
    //         i++;
    //         continue;
    //     } 

    //     if (i==15) break;
    //     std::cout << i << "\n";
    //     i++;
    // }

    
    int iTree;
    std::cout << "How tall is the tree: ";
    std::cin >> iTree;

    for(int i=1; i<2*iTree; i+=2){
        int iSpaces = (2*iTree - i)/2;
        PutNChar(iSpaces, ' ');
        PutNChar(i, '#');
        PutNChar(iSpaces, ' ');
        std::cout << "\n";
    }
    int i = iTree - 1;
    PutNChar(i, ' ');
    std::cout << "#";
    PutNChar(i, ' ');
    std::cout << "\n";

    return 0;
}


void PutNChar(int n, char c){
    for(int i=0; i<n; ++i){
        std::cout << c;
    }
}