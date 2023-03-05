#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr, int i, int sum, int k, vector<int> &ans)
{
    if (i == arr.size())
    {
        if (sum == k)
        {
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            return true;
        }
        return false;
    }
    ans.push_back(arr[i]);
    if (solve(arr, i + 1, sum + arr[i], k, ans) == true)
        return true;

    ans.pop_back();
    if (solve(arr, i + 1, sum, k, ans) == true)
        return true;

    return false;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int k = 10;
    vector<int> ans;
    solve(arr, 0, 0, k, ans);
    return 0;
}