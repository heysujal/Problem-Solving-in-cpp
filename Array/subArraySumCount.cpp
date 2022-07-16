// O(n2)Solution
// Subarrays of given Sum
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int arr[n];
    int givenSum = 3;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {

            sum += arr[j];

            if (sum == givenSum)
            {

                count++;
            }
        }
    }
    cout << "total subarrays with givenSum" << count;

    return 0;
}