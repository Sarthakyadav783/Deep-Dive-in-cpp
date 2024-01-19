#include <iostream>
using namespace std;
int main(){
    int A[5]={2,4,6,8,10};
    int *p=A,*q=&A[4]; //& - address of operator
    cout<<q-p<<endl;
    cout<<p-q<<endl;
    cout<<endl;


    cout<<p<<endl;
    cout<<*p<<endl;
    p++;
    cout<<p<<endl;
    cout<<*p<<endl;
    p++;
    cout<<p<<endl;
    cout<<*p<<endl;
    p--;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<endl;
    p--;

    for (int i=0;i<5;i++){
        cout<< *(p+i)<<endl;

    }
    cout<<endl;
    int *w=new int[5];// allocating heap memory
    cout<<w<<endl;
    cout<<*w<<endl;

    return 0;


    }
