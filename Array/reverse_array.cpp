// Running loop till n/2 for even sized array
// Running loop till n/2 - 1 for odd sized array


#include <bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int n)
{

   
    int i = 0;
    int j = n - 1;

    

    for (; i < j; i++, j--)
    {

        swap(arr[i], arr[j]);
    }

    for (int z = 0; z < n;z++){
        cout<<arr[z];
    }
}



    int main()

    {

        int n;
        cin >> n;
        //
        //
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        reverse_array(arr, n);

        return 0;
    }