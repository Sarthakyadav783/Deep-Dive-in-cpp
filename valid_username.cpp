//extract username out of enail address and check if it is valid or not
# include <iostream>
using namespace std;
int main(){
    string email;
    cout<<"Enter email address: ";
    cin>>email;
    int i=(int)email.find('@');
    string str=email.substr(0,i);
    cout<<str<<endl;
    
    bool is_valid=false;

    for(int i=0;str[i]!='\0';i++){
        if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122) || str[i]=='1'||str[i]=='0' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6'
        || str[i]=='7' || str[i]=='8' || str[i]=='9' || str[i]=='_'){
            is_valid=true;
        }
        else {
            is_valid=false;
            break;
        }
        
    }
    if (is_valid==true){
        cout<<"Valid Username"<<endl;
        }
    else if (is_valid==false){
        cout<<"Invalid Username"<<endl;}
    return 0;
}