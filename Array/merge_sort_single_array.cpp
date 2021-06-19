 
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

    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            cout << a[i++] << " ";
        }

        else
        {
            cout << b[j++] << " ";
        }
    }

    while (i < m)
    {
        cout << a[i++] << " ";
    }

    while (j < n)
    {
        cout << b[j++] << " ";
    }
}

int main()
{

   int arr[] = {10, 20, 30, 40, 1, 2, 3, 4, 5};
    int n  = sizeof(arr)/sizeof(arr[0]);



    int low = 0;
    int high = n-1;
    int mid = low + (high - low) / 2;
 
    merge_sort(arr,4, arr +4 , 5);

    return 0;
}