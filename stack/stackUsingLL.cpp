// stack using linked list

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
     
};


class Stack
{
    node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int x)
    {
        node *temp = new node(x);
        temp->next = top;
        top = temp;
    }
    int pop()
    {
        if (top == NULL)
        {
            cout << "Stack is empty";
            return 0;
        }
        node *temp = top;
        top = top->next;
        int x = temp->data;
        delete temp;
        return x;
    }
    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty";
            return 0;
        }
        return top->data;
    }
    bool isEmpty()
    {
        return top == NULL;
    }
    void display()
    {
        node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.push(2);
    s.push(1);
    s.push(3);
    s.push(4);
    s.push(5);
    s.display();
    cout << s.pop() << endl;
    s.display();
    cout << s.peek() << endl;
    s.display();
    cout << s.isEmpty() << endl;

    
    return 0;
}