#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
using namespace std;
//Standard Tempelate Library contains: Algorithms,Containers and Iterators

/*A vector is like an array that can grow or shrink in size 
dynamically as elements are added or removed. 
Unlike fixed-size arrays, vectors automatically handle
 resizing and memory management behind the scenes.*/
 int main(){
    vector <int> V={10,20,30,40};
    V.push_back(25);
    V.push_back(83);
    V.push_back(0);
    V.pop_back();
    for (int x:V){//for-each loop
        cout<<x<<endl;
    };
    cout<<"\n";
    vector <int>::iterator itr;//iterator class belonging to vector class
    //created an iterator object
    for (itr=V.begin();itr!=V.end();itr++){
        cout<<*itr<<endl;
    }
    cout<<"\n";
    //Doubly linked list(each element is connected to both the previous and the next element)
    list<int> v={7,9,13,15,17,24};
    v.push_back(30);
    v.push_back(70);
    for(int x:v){
        cout<<x<<endl;
    }
    list <int>:: iterator itr1;
    cout<<"Doubly linked list"<<endl;
    for(itr1=v.begin();itr1!=v.end();itr1++){
        cout<<++*itr1<<endl;
    }
    //Singly linked list
    forward_list<int> v1={7,9,13,15,17,24};
    v1.push_front(30);
    v1.push_front(70);
    cout<<"Single linked list"<<endl;
    for(int x:v1){
        cout<<x<<endl;
    }
 }