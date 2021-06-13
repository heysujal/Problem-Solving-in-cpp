// O(n2) solution

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int arr[n+1];
    arr[n] = -1; //no of visitors cant be negative 

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int curr;
    int count = 0;
    int mx = INT_MIN;
    int i = 0;

    if (n == 1)
    {
        count = 1;
        return 0;
    }
    for (curr = 1; curr < n; curr++)
    {  
        // while(i<curr){
        mx = max(mx, arr[i]);
        i++;

        // }

        if(mx<arr[curr]&&arr[curr]>arr[curr+1]){
            count++;

        }
        

    }

    cout << count;

    return 0;
}