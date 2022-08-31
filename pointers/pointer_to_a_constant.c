#include<stdio.h>
// using namespace std;

int main(){

int x = 9;

const int *p ; // Same as int const *p = &x;

p = &x;

p++; // valid

// error for the line below because p is a pointer to a constant

*p = 10; // invalid


return 0;
}