// C++ code to find
// duplicates in O(n) time and O(1) extra space
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int numRay[] = {1, 2, 1, 1, 1, 6, 3, 4, 5, 4, 6, 6, 6, 6};
    int arr_size = sizeof(numRay) / sizeof(numRay[0]);

    // count the frequency
    for (int i = 0; i < arr_size; i++)
    {
        numRay[numRay[i] % arr_size] = numRay[numRay[i] % arr_size] + arr_size;
    }
    cout << "The repeating elements are : " << endl;
    for (int i = 0; i < arr_size; i++)
    {
        if (numRay[i] >= arr_size * 2)
        {
            cout << i << " " << endl;
        }
    }
    return 0;
}

 