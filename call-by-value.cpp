#include <iostream>
using namespace std;
// three methods: pass by vale/address/reference
void swap(int a,int b){
    cout<<a<<" "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int x=10,y=20;
    swap(x,y);// changes done in formal parameters(a,b) will not be
    //reflected in actual parameters (x,y). 
    cout<<x<<" "<<y<<endl;
    return 0;
    //pass by value is useful only  when you want a function to return a value and not modify the actual parameters
}
