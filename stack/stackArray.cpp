// stack array implementation
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top ;
    int size;

    //behavior
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;

    }

    void push(int x){
        if(size - top > 1){
            top++;
            arr[top] =x;
        }
        else{
            cout<<"Stack overflow";
        }
    }

    void pop(){
        if(top>=0){
            top--;

        }else{
            cout<<"Stack underflow";

        }
    }

    int peek(){
        if(top>=0){
            return arr[top];

        }
        else{
            cout<<"Stack is empty";
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;

        }
    }

};

int main(){
    
    Stack st(25);
    st.push(51);
    st.push(15);
    st.push(521);
    st.push(25);
    st.push(51);
    st.push(512);
     
    cout<<st.peek();
    cout<<endl<<st.isEmpty();
    
    return 0;

}