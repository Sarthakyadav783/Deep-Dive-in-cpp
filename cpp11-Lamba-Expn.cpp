#include <iostream>
using namespace std;
int main(){
    //unnamed functions
    //[Capture_list](parameter_list)->return type{body};
    auto f=[](){cout<<"Hello"<<endl;};
    f();
    f();
    [](int x, int y){cout<<"Sum: "<<x+y<<endl;}(10,5);
    int s=[](int x,int y){return x+y;}(10,5);
    cout<<s<<endl;
    int a=10;
    int b=5;
    [&a,&b](){cout<<++a<<" "<<++b<<endl;}();
    int z=7;
    auto f1=[&z](){cout<<z<<endl;};
    f1();
    z++;
    f1();


}