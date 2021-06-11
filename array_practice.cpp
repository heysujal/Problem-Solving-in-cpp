// apna college array exercise
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    const int N = 1e5 + 2;
    int idx[N];
    int minidx = INT_MAX;
    int temp = minidx;

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {

        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }

        else
        {
            idx[arr[i]] = i;
        }
    }

    if (minidx == temp)
    {
        cout << "-1";
    }

    else
    {
        cout << minidx + 1 << endl;
    }

    return 0;
}