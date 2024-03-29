#include<bits/stdc++.h>
using namespace std;



int frogJump(int n, vector<int> &arr)
{    
    vector<int> dp(n, 0);
    
    dp[0] = 0;
    
    for(int i = 1; i < n; i++)
    {
        int left = dp[i-1] + abs(arr[i] - arr[i-1]);
        int right = INT_MAX;
        
        if(i > 1)
            right = dp[i-2] + abs(arr[i] - arr[i-2]);
        
        dp[i] = min(left, right);
    }
    
    return dp[n-1];
    
}