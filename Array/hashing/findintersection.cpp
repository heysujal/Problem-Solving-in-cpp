#include <bits/stdc++.h>
using namespace std;

int intersection(int a[], int m, int b[], int n)
{
    int res = 0;

    for (int i = 0; i < m; i++)
    {

        // checking if element has appeared previously or not
        bool flag = false;
        for (int j =i-1;j>=0; j--)
        {
            if (a[i] == a[j])
            {
                flag = true;
                break;
            }
        }

        if (flag == true)
            continue;

        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                res++;
                break;
            }
        }
    }
    return res;
}
int main()
{
    int a[] = {10, 15, 20, 15, 30, 30, 5};
    int b[] = {10, 15, 20};
    cout << intersection(a, 7, b, 3);
    return 0;
}