// START WITH i
// sum of left side== sum of right side
// then  i is equilibrium index

// 0 -3 5 -4 -2 3 1 0
// O(n^2)
#include <bits/stdc++.h>
using namespace std;


void equil_index(int arr[], int n){


    for (int i = 0; i < n;i++){

        int left_sum = 0;
        int right_sum = 0;
     
        for (int j = 0; j < i;j++){
            left_sum+=arr[j];

        }

        for (int j = i+1; j < n; j++)
        {
            right_sum += arr[j];
        }

        cout << "Left and right sum is " << left_sum << " " << right_sum << endl;

        if(left_sum==right_sum){
            cout << "Equilibrium position is " << i<<endl;
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

    equil_index(arr, n);

    return 0;
}