#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int i, int sum, int k, int &count)
{   
    if(sum > k)
        return;
    if (i == arr.size())
    {
        if (sum == k)
        {
            count++;

        }
        return;
    }
     
    solve(arr, i + 1, sum + arr[i], k, count);
    
    solve(arr, i + 1, sum, k, count);
}

int main()
{

    vector<int> arr = {1, 2, 1};

    int k = 2;
    vector<int> ans;
    int count = 0;
    solve(arr, 0, 0, k, count);
    cout<<count;
    return 0;
}