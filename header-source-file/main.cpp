// File: main.cpp
#include <iostream>
#include "myheader.h"

int main() {
    int result = add(3, 4);
    std::cout << "Sum: " << result << std::endl;

    MyClass myObject;
    myObject.printMessage("Hello, World!");  // Passing a string as a parameter

    return 0;
}
