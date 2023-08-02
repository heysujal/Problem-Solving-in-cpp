#include<bits/stdc++.h>
using namespace std;

class Queue {
    int n; // maxSize
    int* arr;
    int size; // currentSize
    int front;
    int back;
public:
    Queue(int n) {
        this->n = n;
        arr = new int[n];
        front = 0;
        back = 0;
        size = 0;
    }
    int getSize() {
        return size;
    }
    void push(int x) {
        if(size < n) {
            arr[back] = x;
            size++;
            back = (back + 1)%n;
        } else {
            cout<<"Q Overflow\n";
        }
    }
    void pop() {
        if(size > 0) {
            size--;
            front = (front + 1)%n;
        }
        else
            cout<<"Q Underflow\n";
    }
    int top() {
        if(size > 0)
            return arr[front];
        else
            cout<<"Q is Empty\n";
        return -1;
    }
};


int main() {
    Queue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.getSize()<<"\n";
    q.pop();
    q.pop();
    cout<<q.getSize()<<"\n";
    cout<<q.top()<<endl;
    return 0;
}