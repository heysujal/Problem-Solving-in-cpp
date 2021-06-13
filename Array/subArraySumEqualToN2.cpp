// optimized solution

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int givenSum;
    
    cin >> givenSum;
    int i = 0, j = 0, sum = 0, start = -1, end = -1;

    while (j < n && sum + arr[j] < givenSum)
    {

        sum += arr[j];
        j++;
    }

    if (sum == givenSum)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }

     while(j<n){
         sum +=arr[j];
         while(sum>givenSum){
             sum-=arr[i];
             i++;

         }
         if(sum==givenSum){
             start = i+1;
             end = j + 1;
             break;

         }

         j++;

     }

     cout << start << ' ' << end;

     return 0;
}