#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;
    if (year%4==0){
        if (year%100 && year%400==0){
            cout<<"Leap year \n";
            }
        else if(year%100 !=0){
            cout<<"Leap year\n";
        }
        else { 
            cout<<"Not Leap year\n";
        }
        
        
    }       
    else{
        cout<<"Not leap year\n";
    }

    
    return 0;
}
