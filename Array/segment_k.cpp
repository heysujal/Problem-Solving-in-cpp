// https://www.geeksforgeeks.org/check-if-a-key-is-present-in-every-segment-of-size-k-in-an-array/#
#include <bits/stdc++.h>

using namespace std;


bool present_in_seg(int arr[], int n ,int x, int k){
    

    for (int i = 0; i < n-k;i+=k){
        int flag = 0;
        for (int j = i; j<i+k ;j++){
           

            if(arr[j]==x){

                flag = 1;
                break;
            }

        }

        if (flag
            == 0){
            cout << "no it is not present in every segment";
            return 0;

            }
    }

    cout << "yes it is present in every segment";
    return 1;

}


int main()
{

    // int n;
    // cin >> n;
    

    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    int arr[] = {1,2,3,4,3,7};

    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 3;
    int k = 3;
    
    present_in_seg(arr,n,x,k);

    return 0;
}