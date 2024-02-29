#include <iostream>
using namespace std;
//Constructors are used for intialization and for allocating resources
//Destructors are used for releasing/deallocating resources
class Test{
    int *ptr;
    public:
    Test()//contructor
    {
        ptr=new int[10];//Dynamic memory allocation
        cout<<"Test created"<<endl;
    }
    ~Test(){//destructor
    delete[]ptr;//when object is deleted heap memory must also be delted
        cout<<"Test destroyed"<<endl;
    }
};
void fun(){
    Test t;//object created  by constructor and then destroyed by destructor
    Test *p=new Test();//constructor is called here
    delete p;//Destructor is called here
    //Heap Memory must be explicitly deleted
    };
int main(){
    fun();
}