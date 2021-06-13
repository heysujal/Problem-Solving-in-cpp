#include <bits/stdc++.h>
using namespace std;

void sort(int* arr, int size){

    // counter for available position
    int k = 0;

    for (int i = 0; i < size;i++){

        if(arr[i]==0){

            arr[k++] = 0;

        }





    }

    for (; k < size ; k++){
        arr[k] = 1;

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

    int z = 0;
    while(z<n){
        cout<<arr[z]<<" ";
        z++;
    }

    return 0;
}