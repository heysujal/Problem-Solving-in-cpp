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

void general_count_sort(int arr[], int n, int k)
{

    int count[k] = {};

    for (int i = 0; i < n; i++)
    {
        int last_digit = arr[i] % 10;
        count[last_digit]++;
    }

    for (int i = 1; i < k; i++)
    {
        count[i] += count[i - 1];
    }

    int output[n];

    for (int i = n - 1; i >= 0; i--)
    {
        int last_digit = arr[i] % 10;
        output[count[last_digit] - 1] = arr[i];
        count[last_digit]--;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

int main()
{

    int arr[] = {121, 100, 888, 999, 111, 32, 22, 64, 44};
    int n = sizeof(arr) / sizeof(arr[0]);
    // there are 10 digits
    int k = 10;

    general_count_sort(arr, n, k);
    print_array(arr, n);
    return 0;
}