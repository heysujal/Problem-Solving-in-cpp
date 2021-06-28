// brute force
// O(n2)
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
 
    int sum;
    cout<<"enter sum";
    cin>>sum;

    int temp;
    for(int i=0;i<n-1;i++){

        temp = arr[i];
        

        for(int j=i+1;j<n;j++){
            if(temp+arr[j]==sum){
                cout<<"("<<temp<<","<<arr[j]<<")\n";

            }
        }



    }
    
    return 0;
}