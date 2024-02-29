#include <iostream>
#include <typeinfo>
using namespace std;
// auto keyword allows the compiler to automatically deduce the type of a variable based on its intializer
float fun(){
    return 2.34f;

}
int main(){
    double d=12.3;
    int i=9;
    auto x=2*5.7+'a';
    auto y=fun();
    cout<<y<<endl;
    cout<<x<<endl;
    cout<<typeid(x).name()<<endl;
    cout<<typeid(i).name()<<endl;
}