// File: myfunctions.cpp
#include <iostream>
#include "myheader.h"

// Function definition
int add(int a, int b) {
    return a + b;
}

// Class method definition
void MyClass::printMessage(const std::string& message) {
    std::cout << "Message: " << message << std::endl;
}
