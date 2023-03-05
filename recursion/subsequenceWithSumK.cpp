#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int i, int sum, int k, vector<int> &ans)
{
    if (i == arr.size())
    {
        if (sum == k)
        {
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << endl;
        }
        return;
    }
    ans.push_back(arr[i]);
    solve(arr, i + 1, sum + arr[i], k, ans);
    ans.pop_back();
    solve(arr, i + 1, sum, k, ans);
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int k = 10;
    vector<int> ans;
    solve(arr, 0, 0, k, ans);
    return 0;
}