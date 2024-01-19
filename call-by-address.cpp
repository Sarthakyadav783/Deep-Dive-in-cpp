#include<iostream>
using namespace std;
//pointers give the power to a function to access the parameters of a calling function


void swap(int *a,int *b){//pointers
    cout<<*a<<" "<<*b<<endl;
    int temp;
    temp=*a;//defrencing the value of variable pointed to by pointer a 
    *a=*b;
    *b=temp;
    cout<<*a<<" "<<*b<<endl;
}
int main(){
    int x=10,y=20;
    swap(&x,&y);//address of x and y
    cout<<x<<" "<<y<<endl;
    return 0;



}