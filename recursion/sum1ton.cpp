#include<bits/stdc++.h>
using namespace std;

int sumfun(int n ){

if(n==0)
    return  0;


return n+sumfun(n-1);
}


int main(){
cout<<sumfun(5);

return 0;
}