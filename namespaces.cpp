#include <iostream>
using namespace std;
//namespaces are used for removing name conflict between  
// resources like functions,classes and objects;
//Namespace is used to group class,objects and functions
//To structure a program into logical units
namespace First
{
    void fun(){
        cout<<"First"<<endl;
    }
}
namespace Second
{
    void fun(){
        cout<<"Second"<<endl;
    }
}
 using namespace First;
int main(){
    fun();
   Second:: fun();//mention namespace directly
    
};