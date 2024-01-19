#include <iostream>
using namespace std;
int * fun(){
    int *p=new int[5]; // address in heap memory
    for (int i=0;i<5;i++){
        p[i]=5*i;
    }
    cout<<p<<endl;
    return p;


}
int & fun1(int &x){
    cout<<x<<endl;
    return x;
    


    

}
int main(){
    int *q=fun();//pointer q is accesing the memory
    cout<<q<<endl;
    for (int i=0;i<5;i++){
        cout<<q[i]<<endl;

    }
    cout<<endl;
    int a=10;
    fun1(a)=25;
    cout<<a<<endl;
}