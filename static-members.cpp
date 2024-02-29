#include <iostream>
using namespace std;
//static members belong to a class and are sharerd by all the objects of the class
class Test{
    private:
    int a;
    int b;
    public:
    static int count;
    Test(){
        a=10;
        b=10;
        count++;//common for all objects of the class .Only 1 copy exists  in memory

    }
    static int getcount(){
        return count ;//static methods can only access static members
    }
};
int Test::count=0;//global variable but acces only inside the test class.
//global variable will have only one copy
int main(){
    Test t1;
    cout<<Test::getcount<<endl;
    Test t2;
     cout<<Test::getcount<<endl;
    cout<<t1.count<<endl;

    cout<<t2.count<<endl;
    cout<<Test::count<<endl;
    return 0;

}
