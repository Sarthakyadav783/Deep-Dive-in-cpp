#include <iostream>
using namespace std;
int main(){
    int *p=new int[20];//stored in heap memory,dynamic allocation
    cout<<p<<endl;
    cout<<*p<<endl;

    delete []p;
    p=new int[40];
    cout<<p<<endl;
    
    // not possible , array is stored in stack memory, static declaration
    /*int A[5]={1,2,3,4,5};
    int A[10]={1,1,1,1,1,1,1,1};
    cout<<A;*/
    //char *S="hello";
    //cout<<S<<endl;

    return 0;
}