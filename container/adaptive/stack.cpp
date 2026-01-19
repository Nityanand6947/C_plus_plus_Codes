/*
Stack uses and encapsulated object of either vector or dequeue(by default ) or list
Function used in this are:
    -empty()
    -size()
    -top()
    -push(g) 'g' is the top
    -pop()

Note: All time complexity are O(1)
 */

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> stack;

    if(stack.empty()){
        cout<<"Stack is empty "<<endl;
    }else{
        cout<<"Stack is not empty "<<endl;
    }

    stack.push(23);
    stack.push(53);
    stack.push(13);
    stack.push(233);

    cout<<"The size of stack is : "<<stack.size()<<endl;

    cout<<"The element at the top : "<<stack.top()<<endl;

    //We can directly iterate because it does'n allow other member to get accessed directly and moreover it is LIFO,can't disobey it principle
    while(!stack.empty()){
        cout<<stack.top()<<endl;
        stack.pop();
    }

}