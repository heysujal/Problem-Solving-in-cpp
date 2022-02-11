#include<bits/stdc++.h>
using namespace std;

int main(){


int arr[] ={1,2,3,1,2};
int res = 0
;
for (int i = 0; i < 5; i++)
{
    res^=arr[i];
}

cout<<res;

return 0;
}