// in place rotation
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &mat)
    {

        int n = mat.size();

        int deg = 1;

        while (deg--)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {
                    swap(mat[i][j], mat[j][i]); // transpose of matrix.
                }
            }
            for (int i = 0; i < n; i++)
            {
                reverse(mat[i].begin(), mat[i].end()); // reverse each row.
            }
        }
    }
};