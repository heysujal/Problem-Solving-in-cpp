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

int FirstRepeatingElement(int arr[], int n){

    for (int i = 0;i< n-1;i++){

        int ele = arr[i]

            ;

        for (int j = i + 1; j < n;j++){
// or ele==arrp[i] can also be used
            if(ele^arr[j]==0){

                return j;

            }


        }
    }

    return -1;
}


int main()
{

    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

 int k = FirstRepeatingElement(arr,n);
 cout << k;

 // print_array(arr, n);
 return 0;
}