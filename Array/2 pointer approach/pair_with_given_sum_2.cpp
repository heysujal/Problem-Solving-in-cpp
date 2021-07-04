// https: //afteracademy.com/blog/check-for-pair-in-an-array-with-a-given-sum

// using 2 pointer approach
// k is given sum
#include <bits/stdc++.h>
using namespace std;

void find_pair(int *arr, int size, int k)
{

    int i = 0;
    int j = size - 1;
    int flag = 0;

    // step 1 sort the array
    sort(arr, arr + size);

    // now use 2 pointers

    for (; i < j;)
    {

        if (arr[i] + arr[j] == k)
        {
            cout << arr[i] << " " << arr[j] << endl;
            flag = 1;
            i++;
            j--;
        }

        else if (arr[i] + arr[j] > k)
        {
            j--;
        }

        else if (arr[i] + arr[j] < k)
        {
            i++;
        }
    }

    if (!flag)
        cout << "No pair found with sum k";
}

int main()
{

    int n;
    cin >> n;

    int arr[] = {1, -2, 1, 0, 5};

     int k;

    cout << "Enter k ";
    cin >> k;

    find_pair(arr, n, k);

    return 0;
}