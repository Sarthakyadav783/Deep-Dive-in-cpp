
#include <iostream>
using namespace std;
int main(){
    int x=5;int y=1;
    int z=x++*y;//post increment
    x=5;
    int w=++x*y;// pre increment
    cout<<z<<endl<<w<<endl;
    return 0
;}