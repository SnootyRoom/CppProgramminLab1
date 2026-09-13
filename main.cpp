#include <iostream>

int main(int, char**){
    std::cout << "Hello, from CppProgramminLab1!\n";

    // UB fixed
    int arr[5];
    arr[0] = 5; 

}
