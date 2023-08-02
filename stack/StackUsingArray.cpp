#include <bits/stdc++.h>
using namespace std;

class Stack {
  int n; // maxSize
  int *arr;
  int size; // currentSize
  int idx;  // point filhal jo empty position
public:
  Stack(int n) {
    this->n = n;
    arr = new int[n];
    idx = 0;
    size = 0;
  }
  int getSize() { return size; }
  void push(int x) {
    if (size < n) {
      arr[idx] = x;
      size++;
      idx++;
    } else {
      cout << "Stack Overflow\n";
    }
  }
  void pop() {
    if (size > 0) {
      size--;
      idx--;
    } else
      cout << "Stack Underflow\n";
  }
  int top() {
    if (size > 0)
      return arr[idx - 1];
    else
      cout << "Stack is Empty\n";
    return -1;
  }
};

int main() {
  Stack st(10);
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.pop();
  st.pop();
  st.pop();
  st.pop();
  st.pop();
  st.pop();
  return 0;
}
