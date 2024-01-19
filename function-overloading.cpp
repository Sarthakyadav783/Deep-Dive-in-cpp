#include <iostream>
using namespace std;
int add(int x,int y){

    return x+y;
}
float add(float x,float y){//taking extra work from same name dont have to think of different names
return x+y;

}
int main(){
    int a=10,b=5;
    int r=2.5f,t=2.7f;
   int  c=add(a,b);
    float d=add(r,t);
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
    // two functions are different if they have different  arguents even if they have the same name
}/*Function overloading in C++ is a feature that allows multiple functions to have the same name but different parameters. This enables you to supply different semantics for a function, depending on the types and number of its arguments
2
*/