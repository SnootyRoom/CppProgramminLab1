#include <iostream>

int main(int, char**){
    std::cout << "Hello, from CppProgramminLab1!\n";

    // Checking UB
    int arr[5];
    arr[10] = 5; 

}
