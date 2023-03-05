#include <bits/stdc++.h>
using namespace std;
// solving from index to N-1
int solve(int day, int last, int n, vector<vector<int>> &points)
{
    // base case
    if (day == n - 1)
    {
        int maxi = 0;
        for (int i = 0; i <= 2; i++)
        {
            if (i != last)
            {
                maxi = max(maxi, points[day][i]);
            }
        }
        return maxi;
    }

    // general case

    int maxi = 0;

    for (int i = 0; i <= 2; i++)
    {
        if (i != last)
        {

            int ans = points[day][i] + solve(day + 1, i, n, points);
            maxi = max(maxi, ans);
        }
    }

    return maxi;
}

int solveMemo(int day, int last, int n, vector<vector<int>> &points, vector<vector<int>> &dp)
{
    // Useless . Identify base case helps in Tabulation
    // if (day >= n)
    // {
    //     return 0;
    // }
    // base case
    if (day == n - 1)
    {
        int maxi = 0;
        for (int i = 0; i <= 2; i++)
        {
            if (i != last)
            {
                maxi = max(maxi, points[day][i]);
            }
        }
        return maxi;
    }
    if (dp[day][last] != -1)
    {

        return dp[day][last];
    }

    // general case

    int maxi = 0;

    for (int i = 0; i <= 2; i++)
    {
        if (i != last)
        {

            int ans = points[day][i] + solveMemo(day + 1, i, n, points, dp);
            maxi = max(maxi, ans);
        }
    }

    return dp[day][last] = maxi;
}

int solveTab(int n, vector<vector<int>> &points)
{

    // my function solve from index to N-1

    // let say index = n-1 itself
    vector<vector<int>> dp(n, vector<int>(4, -1));

    dp[n - 1][2] = max(points[n - 1][0], points[n - 1][1]);
    dp[n - 1][1] = max(points[n - 1][0], points[n - 1][2]);
    dp[n - 1][0] = max(points[n - 1][1], points[n - 1][2]);
    dp[n - 1][3] = max(points[n - 1][0], max(points[n - 1][1], points[n - 1][2]));

    for (int i = n - 2; i >= 0; i--)
    {
        for (int task = 0; task <= 3; task++)
        {
            for (int k = 0; k <= 2; k++)
            {

                if (k != task)
                {

                    int curr = points[i][k] + dp[i + 1][k];
                    dp[i][task] = max(dp[i][task], curr);
                }
            }
        }
    }

    return dp[0][3];
}

int main()
{

    int n = 3;
    vector<vector<int>> points = {{10, 40, 70},
                                  {20, 50, 80},
                                  {30, 60, 90}};

    // cout << solve(0, 3, n, points) << endl;

    vector<vector<int>> dp(n, vector<int>(4, -1));

    cout << solveMemo(0, 3, n, points, dp) << endl;
    cout << solveTab(n, points) << endl;
    // cout<<solveSpace<<endl;

    return 0;
}