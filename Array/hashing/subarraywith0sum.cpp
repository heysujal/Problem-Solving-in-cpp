#include<bits/stdc++.h>
using namespace std;

bool isSumZero(int arr[], int n){

for (int i = 0; i < n; i++)
{
        int curr_sum =0
        ;
    for (int j = i; j < n; j++)
    {
         curr_sum+=arr[j];
         if(curr_sum==0)
            return true;
    }
    
}
return false;


}

int main(){

int arr[] = {1,2,3};
cout<<isSumZero(arr, 5);

return 0;
}