#include<bits/stdc++.h>
using namespace std;

int revNum(int n){

int digits  = 0;
int temp =n;

while(temp>0)
{
    digits++;
    temp/=10;
}

    if(n< 10)
        return n;  
    
   return (n%10)*(pow(10,digits-1))+  revNum(n/10);



}

int main(){
cout<<revNum(1824);
return 0;
}