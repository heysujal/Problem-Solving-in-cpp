// Count 0's and 1's and then print them

#include <bits/stdc++.h>
using namespace std;


int* count_digit(int* arr, int size){
    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i <size;i++){
        if(arr[i]==0){
            count0++;

        }

        else{
            count1++;
        }

    }

    int count_array[2] = { count0,
                           count1 };

// to print 0
    for (int k = 0; k < count0;k++)
        cout << "0"
             << " ";
//  to print 1  
    for (int k = 0; k < count1; k++)
        cout << "1"
             << " ";

    return count_array;
    




}


int main()
{

    int n;
    cin >> n;

    int* count_ptr = NULL;

    

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    count_ptr  =  count_digit(arr, n);

    // for (int i = 0; i < 2; i++)
    // {
    //     cout << *count_ptr;
    //     count_ptr++;
    // }




    return 0;
}