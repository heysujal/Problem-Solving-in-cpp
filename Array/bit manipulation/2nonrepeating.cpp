// https: //www.geeksforgeeks.org/find-two-non-repeating-elements-in-an-array-of-repeating-elements/

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
int is_set_bit(int ele, int index)
{

    int num = 1 << index;

    return (ele & num) != 0;
}

void find_two(int *arr, int n)
{
    unsigned int res = 0;
    for (int i = 0; i < n; i++)
    {

        res = res ^ arr[i];
    }

    unsigned int temp = res;

    for (int j = 0; j < n; j++)
    {

        if (is_set_bit(arr[j], 0))
        {
            temp ^= arr[j];
        }
    }


// first non repeating number
    cout << temp << endl;
// second non repeating number
    cout << (temp^res);

}
int main()
{

    int arr[] = {5, 4, 1, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    find_two(arr, n);

    // print_array(arr, n);
    return 0;
}