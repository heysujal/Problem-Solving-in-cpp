#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout<<endl;
}

int main()
{

    int arr[] = {};
    int n = sizeof(arr)/sizeof(arr[0]);

    print_array(arr, n);
    return 0;
}