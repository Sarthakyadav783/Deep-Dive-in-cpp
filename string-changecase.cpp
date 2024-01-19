#include <iostream>
using namespace std;

int main(){
    string str="WeLcOme7";
    for (int i=0;str[i]!='\0';i++){
        if (str[i]>=97 && str[i]<=122){//changing lowercase to uppercase
            str[i]-=32;
        }
    }cout<<str<<endl;
    return 0;
}