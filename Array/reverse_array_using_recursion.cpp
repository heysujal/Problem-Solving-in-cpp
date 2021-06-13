// Reverse array using recursion

#include <bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int start, int end){


    if(start>=end)
    return;

    swap(arr[start], arr[end]);

    reverse_array(arr, start + 1, end - 1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{

    int n;
    cin >> n;
    

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse_array(arr, 0,n-1);
    printArray(arr, n);

    return 0;
}