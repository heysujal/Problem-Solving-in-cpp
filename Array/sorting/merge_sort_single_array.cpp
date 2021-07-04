
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

void merge_sort(int a[], int m, int b[], int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int final[m + n];

    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            final[k++] = a[i++];
        }

        else
        {
            final[k++] = b[j++];
        }
    }

    while (i < m)
    {
        final[k++] = a[i++];
    }

    while (j < n)
    {
        final[k++] = b[j++];
    }

    print_array(final, m + n);
}

int main()
{
    // 10, 20, 30, 40
    // 1, 2, 3, 4, 5
    int arr[] = {10, 20, 30, 40, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int high = n - 1;
    // mid is ending of 1st sorted subarray
    // mid need not be in the middle
    // low need not to be in 0; so that's why arr+low
    // high need not to be in n-1
    int mid = 3;

    merge_sort(arr + low, mid + 1, arr + mid + 1, high - mid);
    // print_array(arr, n);
    return 0;
}