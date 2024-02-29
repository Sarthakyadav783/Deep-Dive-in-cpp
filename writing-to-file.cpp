#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream outfile("my.txt",ios::app);
    outfile<<"\nHello world"<<endl;
    outfile<<183<<endl;
    outfile.close();
    
}