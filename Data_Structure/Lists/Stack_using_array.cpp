#include<iostream>
using namespace std;

class Stack{
    int capacity;
    int *arr;
    int top;

    public: 
    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        top = -1;
    }

    ~Stack(){
        cout<<"\nDestructor called ";
    }

    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"Overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop(){
        if(this->top == -1){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        this->top--;
    }

    int getTop(){
        if(this->top == -1){
            cout<<"Underflow\n";
            return INT_MIN;            
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top = -1;
    }

    int size(){
        return this->top +1 ; 
    }

    bool isFull(){
        return this->top = this->capacity - 1;
    }
    void Traversal(){
        for(int i=0;i<this->capacity-1;i++){
            cout<<this->arr[i]<<" ";
        }
    }
};

int main(){
    Stack st(5);

    st.push(1);
    st.push(3);
    st.push(5);
    cout<<st.getTop()<<endl;

    st.push(4);
    st.push(10);
    cout<<st.getTop()<<endl;
    st.push(234);
    st.push(90);

    st.Traversal();


}