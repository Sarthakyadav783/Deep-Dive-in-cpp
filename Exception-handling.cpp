#include <iostream>
using namespace std;
//typed of error: syntax,logical,runtime
// Runtime errors are called exception
int division(int x,int y){
    if (y==0)
    throw string("Error");
    return x/y;
};
int main(){
    int a=10,b=0,c;
    try{
        c=division(a,b);
        cout<<c<<endl;
    }
    catch(string e){
        cout<<"Divison by zero "<<e<<endl;

    }
    string A= "sarthak";
    cout<<A<<endl;

}
