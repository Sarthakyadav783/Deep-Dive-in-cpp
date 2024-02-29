#include <iostream>
using namespace std;
#define PI 3.14159// PI is symbolic constant
#ifndef PI//conditional definiton: if PI is not already defined then only it will defined PI 3
          #define PI 3

       
#endif
#define C cout
#define SQR(x) (x*x)//defining a function
#define MSG(x) #x

int main(){
    cout<<PI*5<<endl;
    C<<"Hello world"<<endl;
    C<<SQR(5)<<endl;
    C<<MSG(Sarthak)<<endl;
}