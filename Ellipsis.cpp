#include <iostream>
#include <cstdarg>
using namespace std;
//In C++, ellipsis (...) is a special notation used to denote a variadic function 
//or a function that can accept a variable number of arguments.
int sum(int n,...){
    va_list list;//object for accesing variable arguments
    va_start(list,n);
    int s=0;
    int x;//for accesing each element
    for(int i=0;i<n;i++){
        x=va_arg(list,int);//for getting the arguments of the defined type
        s+=x;
    };
    return s;
};
int main(){
    cout<<sum(3,10,20,30)<<endl;
    cout<<sum(7,1,2,3,4,5,6,7)<<endl;
    return 0;
}

