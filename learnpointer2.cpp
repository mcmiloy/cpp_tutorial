#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>


void AssignAge3(int* pAge);

void DoubleArray(int* arr, int size);

int main() {
    int age = 43;
    AssignAge3(&age);
    std::cout << "Pointer Age " << age << "\n";
    //------------------------------------------
    int arr[] = {1,2,3,4};
    DoubleArray(arr, 4);
    for(int i=0; i<4; ++i){
        std::cout << "Array " << arr[i] << "\n";
    }


    return 0;
}



// FUNCTIONS
void AssignAge3(int* pAge){
    *pAge = 22;
}

void DoubleArray(int* arr, int size){
    for(int i=0; i<size; i++){
        arr[i] = arr[i]*2;
    }
}
