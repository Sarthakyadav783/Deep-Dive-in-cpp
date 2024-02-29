#include <iostream>
# include <stdexcept>
using namespace std;
 
 class StackOverFlow: public exception{};
 
 class StackUnderFlow: public exception{};
 class Stack{
    private:
    int *stk;//pointer to the array representing the stack
    int top=-1;//Variable to keep track of the top of the stack
    int size;//Maximum size of the stack
    public:
    Stack(int sz){
        size=sz;
        stk=new int[size];//Dynamically allocate memory for the stack array
    }
    void push(int x){
        if (top==size-1){
            throw StackOverFlow();}//Throw an exception if the stack is full  
            top++;
            stk[top]=x;//Other wise add the element to the top of the stack
         
          }
    int pop()
    {
        if (top==-1){
            throw StackUnderFlow();}//Throw an exception if the stack is empty
        return stk[top--]; //return and remove the element from the top of the stack
    }


 };
 int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);//Attempting to push onto a full stack will throw StackOverFlow exception 
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();//Attempting to pop from a full stack will throw StackUnderFlow exception
    return 0;



 }

