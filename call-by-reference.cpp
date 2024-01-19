#include <iostream>
using namespace std;
void swap(int &a,int &b){// a and b are not seperate variables they are references to x and y
    cout<<a<<" "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int x=10,y=20;
    swap(x,y);// in call by reference swap function is pasted here inside the main function  
    // only 1 function would be there in code section of memory
    cout<<x<<" "<<y<<endl;
    return 0;
}