
#include <bits/stdc++.h>
using namespace std;

void swap(int *p1, int *p2)
{

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void bubblesort(int arr[], int n)
{

    int i = 0;
    int j = 0;
    for (i = 0; i < n - 1; i++)
    {
        // i loop should run n-1 times

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{

    int arr[] = {23, 10, 9, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    printf("Elements before sorting array are\n");

    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }

    printf("Elements after sorting array are\n");

    bubblesort(arr, n);
    i = 0;
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}
