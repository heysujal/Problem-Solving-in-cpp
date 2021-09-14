#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {

        int ir = mat.size();// rows
        int ic = mat[0].size(); //cols

               if (ir * ic != r * c)
        {
            return mat;
        }

        // for mat
        int a = 0;
        int b = 0;

        vector<vector<int>> arr(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++)
        {

            for (int j = 0; j < c; j++)
            {

                if (b == ic)
                {
                    b = 0;
                    a++;
                }

                arr[i][j] = mat[a][b];

                b++;
            }
        }

        return arr;
    }
};