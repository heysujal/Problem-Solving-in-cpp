#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> vec = {{5, 3, 1}, {7, 1, 5}, {9, 1, 4}, {10, 0, 20}, {0, 5, 4}, {-1, 8, 3}};
    sort(vec.begin(), vec.end());

    for (size_t i = 0; i < vec.size(); i++)
    {
        for (size_t j = 0; j < vec[0].size(); j++)
        {
            cout << vec[i][j] << " ";
        }

        cout << endl;
    }
}