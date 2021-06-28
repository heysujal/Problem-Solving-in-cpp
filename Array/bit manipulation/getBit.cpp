#include <bits/stdc++.h>
using namespace std;

 int is_set_bit (int ele, int index){

     int num = 1 << index;

     return (ele & num)!=0;

 }

int main()
{

    // int arr[] = {};
    // int n = sizeof(arr)/sizeof(arr[0]);

    cout << is_set_bit(3, 1);
    return 0;
}