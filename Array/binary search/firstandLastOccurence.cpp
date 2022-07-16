#include <bits/stdc++.h>
using namespace std;

int secondOcc(vector<int> v, int low, int high, int target)
{
    int mid = (low + high) / 2;

    if (target > v[mid])
        return secondOcc(v, mid + 1, high, target);
    else if (target < v[mid])
        return secondOcc(v, low, mid - 1, target);

    else
    {
        if ((v[mid + 1] != target and v[mid] == target) or mid == v.size() - 1)
        {
            return mid;
        }
        else
        {
            // search in right half
            return secondOcc(v, mid + 1, high, target);
        }
    }
}

int firstOcc(vector<int> v, int low, int high, int target)
{

    int mid = (low + high) / 2;

    if (target > v[mid])
        return firstOcc(v, mid + 1, high, target);
    else if (target < v[mid])
        return firstOcc(v, low, mid - 1, target);

    else
    {
        if ((v[mid - 1] != target and v[mid] == target) or mid == 0)
        {
            return mid;
        }
        else
        {
            // search in left half
            return firstOcc(v, low, mid - 1, target);
        }
    }
}
int main()
{

    vector<int> v = {1, 2, 2, 2, 3, 3, 4};
    cout << "First Occurence";

    cout << firstOcc(v, 0, v.size() - 1, 2);
    cout << endl
         << "Second Occurence";

    cout << secondOcc(v, 0, v.size() - 1, 2);

    return 0;
}