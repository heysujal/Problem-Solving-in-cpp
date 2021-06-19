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

// int arr[] = {9, 4, 7, 2, 10};

void longest_len(int arr[],int n){
    int max1 = 2;
     
    for (int i = 0; i < n-2;i++){

        int count = 2;
        for (int j = i + 1; j < n;j++){



            if(arr[j]-arr[j-1]==arr[j+1]-arr[j]){
                count++;

            }

            else{
                max1  = max(count, max1);
 
                break;
            }
        }
    }

    cout<<max1;

}

int main()
{

    int arr[] = {1,3,5,7,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    longest_len(arr, n);
    // print_array(arr, n);
    return 0;
}