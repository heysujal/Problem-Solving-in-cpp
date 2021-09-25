#include <bits/stdc++.h>
using namespace std;

void CyclicSort(vector<int> &vec)
{
    int n = vec.size();
    int i = 0;

    while (i < n)
    {
        // vec[i]!=i+1 and vec[i]!=vec[vec[i]-1] carry the same meaning if we use latter for swapping.
        // if (vec[i] != i + 1)
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

int main()
{

    vector<int> v = {3, 5, 2, 1, 4};

    CyclicSort(v);
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}