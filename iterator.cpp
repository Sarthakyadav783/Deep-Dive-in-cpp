#include <iostream>
#include <vector>
using namespace std;
int main(){
    string str="today";
    //accessing a string using iterator
    string :: iterator it;
    for(it=str.begin();it!=str.end();it++){
        cout<<*it<<endl;
        *it=*it-32;


    }
    cout<<str<<endl;
    cout<<endl<<endl<<endl;
    str="today";
    int count=0;
    //accessing a string using for loop
    for (int i=0;str[i]!='\0';i++){
    cout<<str[i]<<endl;
    count++;
    str[i]=str[i]-32;// changing case of the character
    }
    cout<<str<<endl;
    cout<<count<<endl;
    
    vector<int> arr={2,3,5,7,89,34,53};
    cout<<arr.size()<<endl;
}
