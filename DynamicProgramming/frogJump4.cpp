#include<bits/stdc++.h>
using namespace std;
int frogJump(int n, vector<int> &arr)
    
{
    int  f= 0;
    int  s= 0;
    
    for(int i = 1; i < n ;i++)
    {
        
        int left =  s + abs(arr[i]  -  arr[i-1]);
        int right = INT_MAX;
        
        if(i > 1)
            right = f + abs(arr[i]  -  arr[i-2]);
        
        int curr = min(left, right);
         f= s;
        s = curr;
       
        
    }
    
    return s;
    
}