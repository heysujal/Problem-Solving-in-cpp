#include <bits/stdc++.h>
using namespace std;



void find_missing(int arr[], int n){

    int original_size = n + 1;
    for (int j = 1; j <= original_size;j++){
        int flag = 0;
        int k;

        for ( k = 0; k < n; k++)
        {
            if (arr[k] == j)
            {
                flag = 1;
            break; 
            }   

            }

             
             if(flag == 0){
                 cout << "the missing number is " << arr[k - 1];
             }
            

    }
}




int main()
{
    //one less than original size 
    int n;
    cin >> n;

    int arr[] = {1, 2, 4, 6, 3, 7, 8};

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    find_missing(arr, 7);

    return 0;
}