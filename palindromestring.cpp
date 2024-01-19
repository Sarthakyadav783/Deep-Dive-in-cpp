#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;
    string rev;
    int len=(int)str.length();
    rev.resize(len);
    for (int i=0,j=len-1;i<len;i++,j--){
        rev[i]=str[j];

    }
    rev[len]='\0';
    cout<<rev<<endl;
    if (str==rev){
        cout<<"palindrome"<<endl;

    }
    else{
        cout<<"Not a palindrome"<<endl;

    }// or use str.compare(rev)==0
    return 0;
    }