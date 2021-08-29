
#include <bits/stdc++.h>
using namespace std;
int bs(vector<int> &arr, int target)
{

    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {

            low = mid + 1;
        }
    }

    return -1;
}

int main()
{

    vector<int> arr = {1, 2, 3, 5, 8};

    int target = 0;

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << bs(arr, target);

    return 0;
}