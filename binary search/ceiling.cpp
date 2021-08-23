
#include <bits/stdc++.h>
using namespace std;

int ceilingAS(int arr[], int n, int target)
{

    if (target > arr[n - 1])
        return -1;
    int low = 0;
    int high = n - 1;
    bool isAsc = arr[0] < arr[n - 1];
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        else
        {
            if (isAsc)
            {

                if (arr[mid] > target)
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }

            else
            {

                if (arr[mid] < target)
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
        }
    }

    return low;
}

int main()
{

    int arr[] = {1, 2, 3, 5, 8};

    int target = 0;

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << ceilingAS(arr, n, target);

    return 0;
}