// correction solution but gives TLE
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

    int k;
    cin >> k;
    for (int i = 0; i < n - (k - 1); i++)
    {
        int maxNum = arr[i];
        for (int j = i; j < i + k; j++)
        {

            maxNum = max(arr[j], maxNum);
        }
        cout << maxNum;
        cout << endl;
    }
 
    return 0;
}