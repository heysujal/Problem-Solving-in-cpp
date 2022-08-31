#include<bits/stdc++.h>
using namespace std;

int main(){

int x = 9;
int *p = &x;
cout << p << endl;
cout << *p << endl;
cout << &p << endl;
cout << &x << endl;
cout << &*p << endl;
cout << *&p << endl;
cout << &*&p << endl;
cout << &*&x << endl;
cout << &*p << endl;
cout << *&x << endl;
cout << *p << endl;
cout << *(&x) << endl;
cout << *(&p) << endl;
cout << *(&*p) << endl;
cout << *(&*&p) << endl;
cout << *(&*&x) << endl;
cout << *(&*p) << endl;
cout << *(&*&x) << endl;

return 0;
}