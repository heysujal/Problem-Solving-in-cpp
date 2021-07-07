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

void count_sort(int arr[], int n, int divisor)
{   

    // digits lie from 0 to 9
    int count[10] = {};
    int output[n] = {};


    // counting frequency of digits
    for (int i = 0; i < n; i++)
    {
        int last_digit = (arr[i] / divisor) % 10;
        count[last_digit]++;
    }

    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int last_digit = (arr[i] / divisor) % 10;
        output[count[last_digit] - 1] = arr[i];
        count[last_digit]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void radix_sort(int arr[], int n)
{

    // getting the max element
    int max_ele = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_ele)
        {
            max_ele = arr[i];
        }
    }

    // counting the number of digits in the max_ele
    int digit_count = 0;
    while (max_ele > 0)
    {
        digit_count++;
        max_ele /= 10;
    }

    //  initialize with zero

    int divisor = 1;

    while (digit_count--)
    {

        count_sort(arr, n, divisor);
        divisor *= 10;
    }
}

int main()
{

    int arr[] = {0, 121, 100, 888, 999, 111, 32, 22, 0, 64, 44};
    int n = sizeof(arr) / sizeof(arr[0]);
    radix_sort(arr, n);
    print_array(arr, n);
    return 0;
}