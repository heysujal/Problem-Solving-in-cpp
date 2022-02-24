#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> v, int i)
{

    if (i == v.size() - 1)
        return true;

    return (v[0] < v[i + 1]) and isSorted(v, i + 1);
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout << isSorted(v, 0);
    return 0;
}