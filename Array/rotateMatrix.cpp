#include <bits/stdc++.h>
using namespace std;

void print_array(vector<vector<int>> v)
{
    for (auto a : v)
    {
        for (auto b : a)
        {
            cout << b << " ";
        }
        cout << endl;
    }
}

void rotateMat(vector<vector<int>> &arr)
{
    vector<vector<int>> temp(arr.size(), vector<int>(arr.size(), 0));
    int a = 0;
    int b = 0;

    for (int j = 0; j < arr.size(); j++)
    {

        for (int i = arr.size() - 1; i >= 0; i--)
        {

            if (b == arr[0].size())
            {
                b = 0;
                a++;
            }

            temp[a][b] = arr[i][j];

            b++;
        }
    }

    arr = temp;
}

int main()
{
    int m = 2;
    int n = 2;

    vector<vector<int>> v(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[i][j] = i;
        }
    }
    print_array(v);

    rotateMat(v);
    print_array(v);
    rotateMat(v);
    print_array(v);
    rotateMat(v);
    print_array(v);

    // print_array(v);

    return 0;
}