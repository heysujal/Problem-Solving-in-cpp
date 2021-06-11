// print maximum of each subarray
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            int maxNum = arr[i];
            for (int k = i; k <= j; k++)
            {
                maxNum = max(arr[k], maxNum);
            }
            cout << maxNum;
            cout << endl;
        }
    }
    return 0;
}