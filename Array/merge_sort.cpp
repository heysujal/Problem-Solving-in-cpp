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

void merge_sort(int a[], int m , int b[], int n){
    int i = 0;
    int j = 0;

    while (i<m && j<n)
    {
        if(a[i]<b[j]){
            cout << a[i++] << " ";

        }

        else{
            cout << b[j++] << " ";

        }
    }

    while (i<m)
    {
        cout << a[i++] << " ";
       

    }

    while (j<n)
    {
        cout << b[j++] << " ";
    }
    
    
    


}


int main()
{

    int arr1[] = {5,7,8};
    int arr2[] = {1,6};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    merge_sort(arr1, m, arr2, n);
     
    return 0;
}