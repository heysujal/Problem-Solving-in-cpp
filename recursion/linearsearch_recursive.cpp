// linear search Recursive

// weird behaviour shows non-existent element as index = X
#include <bits/stdc++.h>
using namespace std;

// finds and return index
int findin(int arr[], int n, int X, int start)
{    if (n == 0)
        return -1;
     if (arr[start] == X)
        return start;
    
    int index = findin(arr, n-1, X, start + 1);

    return index;
}

int main()
{

    int arr[] = { 10,
                  20,
                  80,
                  30,
                  60,
                  90,
                  110,
                  100,
                  130,
                  170 };


    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 90;

    cout << findin(arr,n , X, 0);
    return 0;
}