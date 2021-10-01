#include <bits/stdc++.h>
using namespace std;

// #sort 0 and 1
// Sorting using concept of pivot element


void do_swap(int arr[],int i, int j){

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j]  =  temp;
    
}



void sort(int *arr, int size)
{
    int pivot = 1;
    int j = 0;

    for (int i = 0; i < size;i++){
        if(arr[i]<pivot){
            do_swap(arr, i , j);

            j++;

        }
    }
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

    sort(arr, n);

     for (int i = 0; i < n; i++)
     {
         cout<<arr[i]<<" ";
         
     }
     

    return 0;
}