#include <bits/stdc++.h>
using namespace std;

// fibonacci from 0 to N

int solve(int p, int f, int s, int n, int sum)
{
    if (p == n)
    {
        return sum;
    }

    f = s;
    s = sum;

    return solve(p + 1, f, s, n, f + s);
}




int main()
{
    // nth fibonacci

    int n = 5;
    cout << solve(2, 0, 1, n, 1) << endl;
    n = 10;
    cout << solve(2, 0, 1, n, 1) << endl;
    n = 11;

    cout << solve(2, 0, 1, n, 1) << endl;

    n = 7;
    cout << solve(2, 0, 1, n, 1) << endl;

    return 0;
}