#include <iostream>
#include <fstream>
using namespace std;

// Write a program to store and retrieve list of item in a file
//Use Serialization
//Class items should have
//1.Name
//2.Price
//3.Quantity
 class Item{
    public:
    string name;
    float price;
    int qty;
    public:
    Item(){};
    Item(string n,float p,int q){
        name=n;
        price=p;
        qty=q;
        
    }
    friend ofstream & operator <<(ofstream &ofs,Item &i);
    friend ifstream & operator >>(ifstream &ifs,Item &i);
 };
 ofstream & operator <<(ofstream &ofs,Item &i){
    ofs<<i.name<<endl;
    ofs<<i.price<<endl;
    ofs<<i.qty<<endl;
    return ofs;
 }
 ifstream & operator>>(ifstream &ifs,Item &i){
    ifs>>i.name>>i.price>>i.qty;
    return ifs;
 }
 int main(){
    int n;
    string name;
    float price;
    int qty;
    cout<<"Enter number of items: ";
    cin>>n;
    Item *list[n];
    cout<<"Enter all the items"<<endl;
    for (int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" Item name, price and quantity ";
        cin>>name;
        cin>>price;
        cin>>qty;
        list[i]=new Item(name,price,qty);
    }
    ofstream ofs("Items.txt");
    for (int i=0;i<n;i++){
        ofs<<*list[i];
    }
    Item item;
    ifstream ifs("Items.txt");
    cout<<"Items in list: "<<endl;
    for(int i=0;i<n;i++){
        ifs>>item;
        cout<<item.name<<endl;
        cout<<item.price<<endl;
        cout<<item.qty<<endl;

    };
 }