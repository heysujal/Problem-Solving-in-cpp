#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

bool isSorted(int arr[], int n, int index)
{
    if (index >= n)
    {
        return true;
    }

    if (arr[index] < arr[index - 1])
    {
        return false;
    }

    return isSorted(arr, n, index + 1);
}

int main()
{

    // int arr[] = {1, 3,2, 4, 5};
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << isSorted(arr, n, 1);
    // print_array(arr, n);
    return 0;
}