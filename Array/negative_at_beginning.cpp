#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

bool is_unique(int any_array[], int size, int ele)
{

    int i = 0;
    while (i < size)
    {

        if (any_array[i] == ele)
        {
            return false;
        }

        i++;
    }

    return true;
}

void find_intersection(int arr1[], int m, int arr2[], int n)
{

    // size of smaller array is the max size intersection_array can have
    // size of n is smaller than m
    int intersection_array[n] = {

    };

    int len = 0;

    for (int i = 0; i < n; i++)
    {
        int ele = arr2[i];

        for (int j = 0; j < m; j++)
        {
            if (ele == arr1[j])
            {

                if (is_unique(intersection_array, len, ele))
                {
                    intersection_array[len++] = ele;
                }
            }
        }
    }

    cout << "the intersection array is" << endl;
    printArray(intersection_array, len);

}

void find_union(int arr1[], int m, int arr2[], int n)
{

    int union_array[m + n] = {};

    union_array[0] = arr1[0];
    int count = 1; //length counter of union array

    for (int i = 1; i < m; i++)
    {

        if (is_unique(union_array, count, arr1[i]))
        {
            union_array[count++] = arr1[i];
        }
    }
    for (int i = 0; i < n; i++)
    {

        if (is_unique(union_array, count, arr2[i]))
        {
            union_array[count++] = arr2[i];
        }
    }
    cout << endl
         << "Union array is\n";
    printArray(union_array, count);
}

int main()
{
    int arr1[] = {1,
                  3,
                  4,
                  5,
                  7};

    int arr2[] = {2,
                  3,
                  5,
                  6};

    int m = sizeof(arr1) / sizeof(arr1[0]);

    int n = sizeof(arr2) / sizeof(arr2[0]);

    find_union(arr1, m, arr2, n);
    find_intersection(arr1, m, arr2, n);

   

    return 0;
}