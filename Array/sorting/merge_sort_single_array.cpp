 
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
    // mid is ending of 1st sorted array
    // mid need not be in the middle
    // low need not to be in 0; so that's why arr+low
    // high need not to be in n-1 
    int mid = 3;


    merge_sort(arr+low,mid+1, arr +mid+1 , n-mid-1);

    return 0;
}