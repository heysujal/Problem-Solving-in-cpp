#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int i, int sum, int k, int &count)
{   
    if(sum > k)
        return 0;
    if (i == arr.size())
    {
        if (sum == k)
        {
            return 1;

        }
        return 0;
    }
     
    int l = solve(arr, i + 1, sum + arr[i], k, count);
    
    int r  = solve(arr, i + 1, sum, k, count);

    return l+r;
}

int main()
{

    vector<int> arr = {1, 2, 1};

    int k = 2;
    vector<int> ans;
    int count = 0;
    cout<<solve(arr, 0, 0, k, count);
     
    return 0;
}