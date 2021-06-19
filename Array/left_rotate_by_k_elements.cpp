#include <bits/stdc++.h>
using namespace std;


// time complexity O(n*k)
// space complexity = O(1)
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    print_array(arr, n);

int z =0;

while(z<k){
    
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp;

    z++;

}


    print_array(arr, n);
    return 0;
}
