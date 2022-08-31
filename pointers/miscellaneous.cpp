#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[]  = {1,2,3,4,5,6,7,8,9,10};

int *p = arr;
//Unary operator : treat them from right to left    
cout<<*++p<<endl; // 2
// array becomes {1,2,3,4,5,6,7,8,9,10}
cout<<++*p<<endl; // 3
// array becomes {1,3,3,4,5,6,7,8,9,10}


// this is different
// solve from right to left
// it is post increment so first it will print the value of p
// then it will increase p

// array becomes {1,3,3,4,5,6,7,8,9,10}
cout<<*p++<<endl; // 3
cout<<*p<<endl; // 3


return 0;
}