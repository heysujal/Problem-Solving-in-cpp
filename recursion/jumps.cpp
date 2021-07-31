// no of ways to reach n by only jumping 1, 2 or 3 steps at a time.
#include <bits/stdc++.h>
using namespace std;

int jump_count(int n)
{

    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    return jump_count(n - 1) + jump_count(n - 2) + jump_count(n - 3);
}

int main()
{

    int n;
    cin >> n;

    cout << jump_count(n);

    return 0;
}