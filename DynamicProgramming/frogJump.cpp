// https://www.codingninjas.com/codestudio/problems/frog-jump_3621012?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include<bits/stdc++.h>
using namespace std;
int solve(int i , vector<int> &arr)
{
    if(i==0)
            return 0;
    
    int left = solve(i-1,arr)  +  abs(arr[i] -  arr[i-1]);
    
    int right = INT_MAX;
    
    
    if(i>1)
        right = solve(i-2, arr)  + abs(arr[i] - arr[i-2]);
    
    return min(left, right);
    
}


int frogJump(int n, vector<int> &arr)
{
    return solve(n-1, arr);
    
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    frogJump(n-1, arr);
    return 0;
}