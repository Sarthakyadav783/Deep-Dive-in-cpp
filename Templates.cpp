#include <iostream>
using namespace std;
//Tempelates are used for generic programming
/*
Templates in C++ are a powerful feature that allows you to 
write generic code, enabling you to create functions and classes 
that work with any data type. Templates provide a way to write 
code without specifying the exact data type until the code is actually used. 
This helps in achieving code reusability and flexibility.*/
template<class T>
T maximum(T x, T y){//tempelate function
    return x>y?x:y;
}
template<class T,class R>
void add(T x,R y){
    cout<<x+y<<endl;
}

int main(){
cout<<maximum(10,15)<<endl;
add(7,18.3);
}
