#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    void CyclicSort(vector<int> &vec)
    {
        int n = vec.size();
        int i = 0;

        while (i < n)
        {

            if (vec[i] != vec[vec[i] - 1])
            {
                swap(vec[i], vec[vec[i] - 1]);
            }

            else
            {
                i++;
            }
        }
    }

    int findDuplicate(vector<int> &nums)
    {
        // counting sort

        int n = nums.size();
        CyclicSort(nums);

        for (int i = 0; i < n; i++)
        {

            if (nums[i] != i + 1)
                return nums[i];
        }

        return -1;
    }
};