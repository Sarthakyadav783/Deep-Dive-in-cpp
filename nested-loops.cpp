#include<iostream>
using namespace std;
// printing pattern
int  main()

{ int n=5;
 for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if (i+j<n){
            cout<<"* ";

        }
        else {
            cout<<" ";

        }


    } cout<<endl;
 
 }
 return 0;
}













/*  int n=4;
     for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i<=j){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
    } cout<<endl;
    
     }
   return 0;
*/