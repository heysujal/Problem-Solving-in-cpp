// this solution is not passing testcase
// find the two repeating element in array

#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n)
{
    for (int i = 0; i < n + 2; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
pair<int, int> twoRepeated(int arr[], int N)
{

    int count = 0;
    pair<int, int> PAIR1;
    // Your code here

    for (int i = 0; i < N + 1; i++)
    {

        for (int j = i + 1; j < N + 2; j++)
        {

            if (arr[i] == arr[j])
            {
                if (count == 0)

                    PAIR1.first = arr[i];

                else if (count == 1)
                    PAIR1.second = arr[i];

                count++;
            }
        }
    }
    return PAIR1;
}
int main()
{

    int arr[] = {1, 2, 2, 1};
    // int arr[] = {1, 2, 1, 3, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]) - 2;
    pair<int, int> res;

    res = twoRepeated(arr, n);
    cout << res.first << " " << res.second;
    cout << endl;
    print_array(arr, n);
    return 0;
}

 