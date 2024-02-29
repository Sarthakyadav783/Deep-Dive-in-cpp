#include <iostream>
using namespace std;
class Car{//Abstract Class(it is having pure virtual functions)
// Abstract classes cannot have objects but they can have pointers to achieve polymorphism
    public:
    virtual void start()=0;// pure virutal function(it is mandatory for derived class to override this function)
    virtual void  stop()=0;
};
class Innova: public Car{
    void start(){
        cout<<"Innova started"<<endl;

    }
    void stop(){
         cout<<"Innova stoped"<<endl;
    }


};
class Swift: public Car{
    void start(){
        cout<<"Swift started"<<endl;

    }
    void stop(){
         cout<<"Swift stoped"<<endl;
    }


};
int main(){
    Car *ptr=new Innova();
    ptr->start();
    ptr->stop();
    ptr=new Swift();
    ptr->start();
    ptr->stop();
    return 0;

}
