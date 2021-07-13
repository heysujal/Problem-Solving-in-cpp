// find second largest in array

#include <bits/stdc++.h>
using namespace std;

int_fast16_t secondLargest(int arr[], int n)
{

    int f = INT_MIN;

    int s = INT_MIN;
    for (int i = 0; i < n; i++)
    {
         if(arr[i] > f){
             s = f;
             f = arr[i];

         }

         else if (arr[i] > s and arr[i] != f)
         {
             s = arr[i];
         }
    }

    if (s == INT_MIN)
        printf("There is no second largest element\n");
    else
        printf("The second largest element is %dn", s);
    return s;
}

int main()
{

    int arr[] = {1,5, 5, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

     cout<< secondLargest(arr, n);

    return 0;
}
