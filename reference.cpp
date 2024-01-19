#include <iostream>
using namespace std;
int main(){
    int x=10;
    int &y=x;// refere to the same thing(value) in memory
    cout<<x<<endl;
    cout<<y<<endl;
    x++;
    y++;
    cout<<x<<endl;
    //& address of 
    cout<<&x<<endl;// y is just another name for same variable x.
    //its adress is same at it does not occupy any extra memory
    cout<<&y<<endl;
    
}
