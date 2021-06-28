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

// find min element and put it at first position
// and so on

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
         
        int min_ele = arr[i];
        for (int j = i+1; j < n; j++)
        {

            if (min_ele > arr[j])
            {
                swap(arr[i], arr[j]);
                min_ele = arr[j];
            }
        }
       

         
    }
}

int main()
{
    int arr[] = {10, 5, 8, 20, 2, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    system("cls");
    selection_sort(arr, n);

    print_array(arr, n);
    return 0;
}