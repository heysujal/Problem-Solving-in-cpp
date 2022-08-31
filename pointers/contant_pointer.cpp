#include<bits/stdc++.h>
using namespace std;

int main(){

int x = 9;
// int* const p ;// uninitialized constant pointer error

int* const p =  &x;
// error for the line below because p is a constant pointer
p++;// invalid


*p = 10; //valid 


return 0;
}