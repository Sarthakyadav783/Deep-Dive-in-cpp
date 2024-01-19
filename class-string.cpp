#include <iostream>
using namespace std;
int main(){
    string str="Hello";
    string str_="Programming";
    str.append(" World");
    cout<<str<<endl;
    str.insert(7,"xxx");
    cout<<str<<endl;
    str_.replace(3,4,"jamm");
    cout<<str_<<endl;
    str.push_back('z');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    str_.swap(str);
    cout<<str_<<endl;
    cout<<str<<endl;
    string s="Sarthak";
    char str1[10];
    s.copy(str1,s.length());
    cout<<str1<<endl;
    for (int i=0;i<(sizeof(str1)/sizeof(*str1));i++){
        cout<<str1[i]<<endl;
    }
    cout<<str.find('Q')<<endl;
    cout<<s.substr(0,3)<<endl;
    cout<<s.find_first_of('a')<<endl;
    cout<<s.find_last_of('a')<<endl;
    string s1="Yadav";
    cout<<s1.compare(s)<<endl;//which string comes first as per dictionary
    cout<<s.compare(s1)<<endl;//returns the difference between the ASCII codes
 

    return 0;

}