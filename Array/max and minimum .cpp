// max and min of array using struct
#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair minmax(int arr[], int n)
{

    struct Pair p1;
    int i = 0;

    if (n == 1)
    {
        p1.min = arr[0];
        p1.max = arr[0];

        return p1;
    }

    else
    {
        // setting initial values

        if (arr[0] > arr[1])
        {
            p1.min = arr[1];
            p1.max = arr[0];
        }

        else if(arr[0] < arr[1])
        {
            p1.min = arr[0];
            p1.max = arr[1];
        }
        else
        {
            p1.max = arr[0];
            p1.min = arr[0];
        }
        for (int i = 2; i < n; i++)
        {

            if (p1.min > arr[i])
                p1.min = arr[i];

            if (p1.max < arr[i])
                p1.max = arr[i];
        }

        return p1;
    }
}
int main()
{

    struct Pair zuck;
    int arr[] = {0, 1, 2, 4, 78};

    int n = sizeof(arr) / sizeof(arr[0]);

    zuck = minmax(arr, n);

    cout << " Max element is " << zuck.max;
    cout << endl
         << "Min element is " << zuck.min;

    return 0;
}