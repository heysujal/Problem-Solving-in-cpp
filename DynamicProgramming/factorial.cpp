#include<bits/stdc++.h>
using namespace std;
// from 1 to N
int fact(int i , int n)
{
    if(i==n)
        return n;


    return i*fact(i+1, n);
}

int main(){
int arr[3]  = {3, 5, 4};

cout<<fact(1, arr[0])<<endl;
cout<<fact(1, arr[1])<<endl;
cout<<fact(1, arr[2])<<endl;
return 0;
}