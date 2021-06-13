#include <bits/stdc++.h>
using namespace std;


void find_max(int arr[],int n){

    int max_product = INT_MIN;

    for (int i = 0; i < n-1;i++){
        for (int j = 1; j < n;j++){
            
            if(max_product<(arr[i]*arr[j])){
                max_product = arr[i]*arr[j];

            }
        }
    }

    cout << "Max product is " << max_product;
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
 
    
    find_max(arr,n);

    return 0;
}

