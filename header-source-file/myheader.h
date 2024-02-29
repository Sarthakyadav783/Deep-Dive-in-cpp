// File: myheader.h
#ifndef MYHEADER_H
#define MYHEADER_H

#include <string>  // Include the necessary header for std::string

// Function declaration
int add(int a, int b);

// Class declaration
class MyClass {
public:
    void printMessage(const std::string& message);  // Updated method with a string parameter
};

#endif
