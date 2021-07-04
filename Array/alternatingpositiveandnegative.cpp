#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void right_shift(int *arr, int start, int end)
{

    int end_ele = arr[end];
    for (int z = end - 1; z >= start; z--)
    {
        arr[z + 1] = arr[z];
    }

    arr[start] = end_ele;
}

void posineg(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
            // check if negative num is on odd index
            // or 
            // positive num is on even index
        if ((arr[i] > 0 && i % 2 == 0) || (arr[i] < 0 && i % 2 != 0))
        {

            for (int j = i + 1; j < n; j++)
            {
                    // check if they have opposite sign
                if ((arr[j] ^ arr[i]) < 0)
                {

                    // rigth shift including arr[i] and arr[j]

                    right_shift(arr, i, j);

                    break;
                }
            }
        }
    }
}

int main()
{

    int arr[] = {1,
                 2,
                 3,
                 -4,
                 -1,
                 4};
    // int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    posineg(arr, n);
    print_array(arr, n);
    return 0;
}