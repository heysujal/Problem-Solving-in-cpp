// index of number just <= target

#include <bits/stdc++.h>
using namespace std;

int floorAB(int arr[], int n, int target)
{

    if (target < arr[0])
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

            if (arr[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }

    return high;
}

int main()
{

    int arr[] = {1, 2, 3, 5, 8};
    int target = 0;

    int n = sizeof(arr) / sizeof(arr[0]);

    
cout<< floorAB(arr, n , target);

    return 0;
}