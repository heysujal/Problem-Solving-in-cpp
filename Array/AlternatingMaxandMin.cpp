
// given a sorted array
// alternating max and minimum element
// in constant extra space
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

void rearrange(int* arr, int n){

    int i =0;
    int max_index = n-1;
    int min_index = 0

        ;
    int z = n + 1;

    for (i = 0; i < n;i++){

            // when index is even we add the max_index element and decrement it
        if(i%2==0){
            arr[i] = arr[i] + (arr[max_index] % z) * z;
            max_index--;

        }

        else{
            // when index is odd we add the min_index element and increment it
            arr[i] = arr[i] + (arr[min_index] % z) * z;
            min_index++;

        }

    }




    
        // for final answer we divide every element by z

        for (int k = 0; k < n; k++)
        {
            arr[k] /= z;
        }
        
}

int main()
{

    int arr[] = {1,2 ,3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr, n);
    print_array(arr, n);
    return 0;
}