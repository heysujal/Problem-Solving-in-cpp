#include <bits/stdc++.h>
using namespace std;

void solve(int i, int n, vector<int> &arr, int sum, int &ans)
{
    if (i >= n)
        return;
    if (i == n - 1)
    {

        ans = min(sum, ans);
        return;
    }

    solve(i + 1, n, arr, sum + abs(arr[i + 1] - arr[i]), ans);
    solve(i + 2, n, arr, sum + abs(arr[i + 2] - arr[i]), ans);
}

int frogJump(int n, vector<int> &arr)
{

    int ans = INT_MAX;
    solve(0, n, arr, 0, ans);
    return ans;
}