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

// lomuto partition
int partition (int arr[], int l, int h){

    int pivot = arr[h];

    int i =  l-1;

    for (int j = l; j <= h - 1;j++){

        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);

        }

    }

    swap(arr[i + 1], arr[h]);
    return i + 1;
}

void quick_sort(int arr[], int l, int h)
{

    if (l < h)
    {

        int p = partition(arr, l, h);

        quick_sort(arr, l, p - 1);
        quick_sort(arr, p + 1, h);
    }
}

int main()
{

    int arr[] = {1, 3, 0, -1 , 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, 0, n - 1);
    print_array(arr, n);
    return 0;
}