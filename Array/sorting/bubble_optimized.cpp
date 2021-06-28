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

void Bubble_sort(int *arr, int n)
{
    // no point of running for last element , bcoz arr[j+1] won't be available
    for (int i = 0; i < n - 1; i++)
    {   bool swapped = false;

        // from last they are getting sorted
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                {

                  swap(arr[j], arr[j + 1]);
                    swapped = true;


                }      
        

        
        }

        if (swapped = false){
            break;

        }
    }
}

int main()
{

    int arr[] = {1, 2, 8, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    Bubble_sort(arr, n);
    print_array(arr, n);
    return 0;
}