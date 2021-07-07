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

void count_sort_naive(int arr[], int n, int k)
{
    int count[k] = {};
    int index = 0;
    // counting all elements
 

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 0; i < k; i++)
    {

        for (int t = 0; t < count[i]; t++)
        {
            arr[index] = i;
            index++;
        }
    }
    
}

int main()
{
    //    arr[i] ranges from 0 to k-1
    int arr[] = {0, 1, 0, 1, 2, 0};

    int k = 5;

    int n = sizeof(arr) / sizeof(arr[0]);

    count_sort_naive(arr, n, k);
    print_array(arr, n);

    return 0;
}