#include <bits/stdc++.h>
using namespace std;



int count_subsets( int arr[], int n, int sum ){

    if(n==0)
       return (sum == 0) ? 1 : 0;

    return count_subsets(arr, n - 1, sum) +
           count_subsets(arr, n - 1, sum - arr[n - 1]);
}


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