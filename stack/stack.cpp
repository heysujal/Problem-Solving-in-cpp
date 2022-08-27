#include <bits/stdc++.h>
using namespace std;
class Stack
{

public:
    int size;
    int top;
    int *arr;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // push , pop, isEmpty, top

    bool isEmpty()
    {

        return (top == -1);
    }

    int pop()
    {

        if (!isEmpty())
        {

            return arr[top--];
        }

        else
        {
            cout << "Stack is empty";
            return INT_MIN;
        }
    }

    int peek()
    {
        if (!isEmpty())
        {
            return arr[top];
        }

        else
        {
            cout << "Stack is empty\n";
            return INT_MIN;
        }
    }

    bool isFull()
    {
        return (top == size - 1);
    }
    void push(int x)
    {
        if (!isFull())
        {
            top++;
            arr[top] = x;
        }
        else
        {
            cout << "Stack Overflow\n";
        }
    }

    int getSize()
    {
        return top + 1;
    }
};

 


int main()
{
     
    Stack st(50);
    // st.push(51);
    // st.push(15);
    // st.push(521);
    // st.push(25);
    // st.push(51);
    // st.push(512);
    // cout << st.getSize() << endl;
    // st.pop();
    // cout << st.getSize() << endl;
    // cout << st.peek() << endl;
    // cout << st.isEmpty() << endl;
    // cout << st.isFull() << endl;
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    for(int i  =0; i < 50; i++){
        st.push(i);
    }
    cout << st.isEmpty() << endl;
    cout << st.isFull() << endl;
  
    return 0;
}