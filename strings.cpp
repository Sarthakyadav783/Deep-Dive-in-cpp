#include <iostream>
using namespace std;
/*Unlike in some other programming languages, 
strings in C++ are mutable, meaning that their values 
can be changed after initialization
.
*/
int main(){
    char s1[10]="235";
    char s2[10]="54.77";
     
     long int x=strtol(s1,NULL,10);
     float y=strtof(s2,NULL);

     cout<<x<<endl<<y<<endl;


    


     return 0;



}