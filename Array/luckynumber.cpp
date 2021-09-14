#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {

        // step1  find min ele in each row
        int m = matrix.size();
        int n = matrix[0].size();
        // saves all lucky indices
        vector<int> ans;

        for (int i = 0; i < m; i++)
        {

            int ele = INT_MAX;

            int col;
            int flag = 0;
            // finds smallest in row and saves its j index
            for (int j = 0; j < n; j++)
            {

                if (ele > matrix[i][j])
                {
                    ele = matrix[i][j];
                    col = j;
                }
            }

            // Checks if the saved j is the column of the minimum element
            for (int row = 0; row < m; row++)
            {
                if (matrix[row][col] > ele)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
                ans.push_back(ele);
        }

        return ans;
    }
};