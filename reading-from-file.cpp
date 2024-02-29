#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream infile;
    infile.open("my.txt");
    if (!infile.is_open()){
        cout<<"File cannot be opened"<<endl;

    };
    string str1,str2,str3,str4;
    int x;
    infile>>str1>>str2>>str3>>str4;
    infile>>x;
    cout<<str1<<" "<<str2<<" "<<str3<<" "<<str4<<" "<<x<<endl;
    if(infile.eof()){
        cout<<"End of file reached"<<endl;
        infile.close();

    }
}