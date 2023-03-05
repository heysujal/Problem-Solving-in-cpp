#include <bits/stdc++.h>
using namespace std;

int fibDP(int n, vector<int> &dp)
{

    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fibDP(n - 1, dp) + fibDP(n - 2, dp);
}
int main()
{

    int arr[] = {0, 1, 2, 3,4, 5, 6, 7, 8};

    for(int i = 0 ; i < 9  ; i++)
    {

    vector<int> dp(i+1, -1);
    cout << fibDP(i, dp) << endl;


    }

    return 0;
}