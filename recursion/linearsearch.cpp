#include <bits/stdc++.h>
using namespace std;

int ls(vector<int> v, int target, int i)

{
    if (i == v.size())
        return -1;

    if (v[i] == target)
        return i;

    else

        return ls(v, target, i + 1);
}

int main()
{
    int target = 2;
    vector<int> v = {1, 2, 3, 18};
    cout << ls(v, target, 0);

    return 0;
}