#include <bits/stdc++.h>

using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//=================FOR INTERSECTION=====================
bool is_present(int ele, int *brr, int m, int inter_array[], int count)
{
    int i, j;
    for (i = 0; i < count; i++)
    {
        if (inter_array[i] == ele)
        {
            return false;
        }
    }
    for (i = 0; i < m; i++)
    {
        if (brr[i] == ele)
        {
            return true;
        }
    }
    return false;
}

int find_intersection(int *arr, int n, int *brr, int m)
{
    int i, j;
    int inter_array[n] = {};
    int count1 = 0;
    for (i = 0; i < n; i++)
    {
        if (is_present(arr[i], brr, m, inter_array, count1))
        {
            inter_array[count1++] = arr[i];
        }
    }

    printArray(inter_array, count1);
    return count1;
}
//==============FOR UNION=========================
bool is_unique(int ele, int *unionArray, int count)
{
    int i, j;
    for (i = 0; i < count; i++)
    {
        if (unionArray[i] == ele)
        {
            return false;
        }
    }
    return true;
}

int find_union(int *arr, int n, int *brr, int m)
{
    int unionArray[n + m] = {};
    int i, j;
    int count = 1;
    unionArray[0] = arr[0];
    for (i = 1; i < n; i++)
    {
        if (is_unique(arr[i], unionArray, count))
        {
            unionArray[count++] = arr[i];
        }
    }
    for (i = 0; i < m; i++)
    {
        if (is_unique(brr[i], unionArray, count))
        {
            unionArray[count++] = brr[i];
        }
    }
    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n] = {};
    int brr[m] = {};

    int i, j;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < m; i++)
        cin >> brr[i];
    int len_union = find_union(arr, n, brr, m);
    // cout << len_union << endl;
    // int len_inter = find_intersection(arr, n, brr, m);
    // cout << len_inter << endl;

    return 0;
}