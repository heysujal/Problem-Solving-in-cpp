// Given an array and a number k 
// where k is smaller than the size 
// of the array, we need to find the
//  k’th smallest element in the given 
//  array.It is given that all array elements
//  are distinct.

//                                                                         
//Input : arr[] = {7, 10, 4, 3, 20, 15} 
// k = 3
// Output : 7
//  Input : arr[] = {7, 10, 4, 3, 20, 15} 
// k = 4
//  Output : 10




#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int k;

    cout << "enter k:";
    cin >> k;

    cout << arr[k-1];


    return 0;
}