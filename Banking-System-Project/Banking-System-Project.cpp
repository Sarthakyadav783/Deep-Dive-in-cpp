#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <map>
using namespace std;
#define MIN_BALANCE 500;


class InsufficientFundsException : public std::exception {

private:
    std::string error_message;
public:
    InsufficientFundsException(const std::string& message) : error_message(message) {}

    // Override what() method to return the error message
    virtual const char* what() const noexcept override {
        return error_message.c_str();
    }

};

class Account{
    private:
    long accountNumber;
    string firstName;
    string lastName;
    float balance;
    static long NextAccountNumber;
    public:
    Account(){};
    Account(string fname,string lname,float balance){
        NextAccountNumber++;
        accountNumber=NextAccountNumber;
        firstName=fname;
        lastName=lname;
        this->balance=balance; // assigning value of local variable to member varaible of current instance of the class
    }
    //accessors
    long getAccountNo(){
        return accountNumber;
    }
    string getFirstName(){
        return firstName;
    }
    string getLastName(){
        return lastName;
        }
    float getBalance(){
        return balance;
    }
    void Deposit (float amount){
        balance +=amount;
    }
    void Withdraw( float amount){
        if ((balance-amount)<500)
            throw InsufficientFundsException("Insufficient Funds");
        
        balance -=amount;
    }
    static void setLastAccountNumber(long accountNumber){
        NextAccountNumber=accountNumber;

    };
    static long getLastAccountNumber(){
        return NextAccountNumber;
    };
    friend ofstream & operator<<(ofstream &ofs,Account &acc);
   friend ifstream & operator>>(ifstream &ifs,Account &acc);
   friend ostream & operator<<(ostream &os,Account &acc);

};
long Account::NextAccountNumber=0;
ofstream & operator<<(ofstream &ofs,Account &acc)
{
 ofs<<acc.accountNumber<<endl;
 ofs<<acc.firstName<<endl;
 ofs<<acc.lastName<<endl;
 ofs<<acc.balance<<endl;
 return ofs;
}
ifstream & operator>>(ifstream &ifs,Account &acc)
{
 ifs>>acc.accountNumber;
 ifs>>acc.firstName;
 ifs>>acc.lastName;
 ifs>>acc.balance;
 return ifs;

}
ostream & operator<<(ostream &os,Account &acc)
{
 os<<"First Name:"<<acc.getFirstName()<<endl;
 os<<"Last Name:"<<acc.getLastName()<<endl;
 os<<"Account Number:"<<acc.getAccountNo()<<endl;
 os<<"Balance:"<<acc.getBalance()<<endl;
 return os;
}


class Bank{
    private:
    map <long,Account> accounts;
    public:
    Bank(){
        Account account;
        ifstream infile;
        infile.open("Bank-Records.txt");
        if(!infile){
            cout<<"File Not Found!"<<endl;
            return;
        }
        while(!infile.eof()){
            infile>>account;
            accounts.insert(pair<long,Account>(account.getAccountNo(),account));
        }
        Account:: setLastAccountNumber(account.getAccountNo());
        infile.close();
    }
    Account OpenAccount(string fname ,string lname,float balance){
        ofstream outfile;
        Account account(fname,lname,balance);
        accounts.insert(pair<long,Account>(account.getAccountNo(),account));
        outfile.open("Bank-Records.txt",ios::trunc);

 map<long,Account>::iterator itr;
 for(itr=accounts.begin();itr!=accounts.end();itr++)
 {
 outfile<<itr->second;
 }
 outfile.close();
 return account;

};
    Account BalanceEnquiry(long accountNumber){
        map <long,Account>::iterator itr=accounts.find(accountNumber);
        return itr->second;
    }
    Account Deposit (long accountNumber,float amount){
        map<long,Account>:: iterator itr=accounts.find(accountNumber);
        itr->second.Deposit(amount);
        return itr->second;
    }
    Account Withdraw(long accountNumber,float amount){
        map<long,Account>::iterator itr=accounts.find(accountNumber);
        itr->second.Withdraw(amount);
        return itr->second;
        
    }

  void CloseAccount(long accountNumber){
    map<long,Account>::iterator itr = accounts.find(accountNumber);
    if (itr != accounts.end()) {
        cout << "Account Deleted" << endl;
        accounts.erase(itr);
    } else {
        cout << "Account with number " << accountNumber << " not found" << endl;
    }
}


    
    void showAllAccounts(){
        map<long,Account>::iterator itr; 
        for(itr=accounts.begin();itr!=accounts.end();itr++){
            cout<<"Account"<<itr->first<<endl<<itr->second<<endl;

        }

    };
    ~Bank(){
        ofstream outfile;
        outfile.open("Bank-Records.txt",ios::trunc);
        map<long,Account>::iterator itr;
        for(itr=accounts.begin();itr!=accounts.end();itr++){
            outfile<<itr->second;

        }
        outfile.close();

    };


};
int main(){
    Bank bank;
    Account account;
    int choice;
    string fname,lname;
    long accountNumber;
    float balance;
    float amount;
    cout<<"***Banking System***"<<endl;
    while (choice!=7){
        cout<<"\n\tSelect one option below";
        cout<<"\n\t1. Open an Account";
        cout<<"\n\t2. Balance Enquiry";
        cout<<"\n\t3. Deposit";
        cout<<"\n\t4. Withdrawal";
        cout<<"\n\t5. Close an Account";
        cout<<"\n\t6. Show All Accounts";
        cout<<"\n\t7. Quit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
        cout<<"Enter First name: ";
        cin>>fname;
        cout<<"Enter last name: ";
        cin>>lname;
        cout<<"Enter intitial Balance: ";
        cin>>balance;
        account=bank.OpenAccount(fname,lname,balance);
        cout<<"Bank acoount created successfully"<<endl;
        cout<<endl<<account;
        break;
        case 2:
        cout<<"Enter Account Number: ";
        cin>>accountNumber;
        account=bank.BalanceEnquiry(accountNumber);
        cout<<"\nYour Account Details"<<endl;
        cout<<endl<<account;
        break;
        case 3:
        cout<<"Enter Account Number: ";
        cin>>accountNumber;
        cout<<"Enter deposit amount: ";
        cin>>amount;
        account=bank.Deposit(accountNumber,amount);
        cout<<"\nYour amount is deposited"<<endl;
        cout<<endl<<account;
        break;
        case 4:
        cout<<"Enter Account Number: ";
        cin>>accountNumber;
        cout<<"Enter Withdraw Amount: ";
        cin>>amount;
        account=bank.Withdraw(accountNumber,amount);
        cout<<"\n Amount Withdrawn"<<endl;
        cout<<endl<<account;
        
        break;
        case 5:
        cout<<"Enter Account Number: ";
        cin>>accountNumber;
        bank.CloseAccount(accountNumber);
        cout<<"\n Account is closed"<<endl;
        break;
        case 6:
        bank.showAllAccounts();
        break;
        case 7: break;


        default:
        cout<<"\nEnter Correct Choice\n";
        exit(0);
            
        }

    }
  return 0;
    
}