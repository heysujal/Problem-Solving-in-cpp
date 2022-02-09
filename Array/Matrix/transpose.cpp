// it is not printing anything

#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>  matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
}

void transpose(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 0; i < m; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
        cout << endl;
    }
}
int main()
{

    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12}};

    transpose(matrix);
    print(matrix);

    return 0;
}