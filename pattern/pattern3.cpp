// *
// * *
// * * *
// * * * *
// * * *
// * *
// *

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k = 0;

    int n;
    cin >> n;

    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        i <= n ? k++ : k--;

        for (int j = 1; j <= k; j++)
        {
            if (j <= k)
                cout << "* ";
        }
        cout << endl;
    }

    return 0;
}