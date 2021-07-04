// https: //www.geeksforgeeks.org/find-common-elements-three-sorted-arrays/

//  optimal soln
 
#include <bits/stdc++.h>
using namespace std;
 
void findCommon(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{

    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> vec;

    while (i < n1 && j < n2 && k < n3)
    {

        if (arr1[i] == arr2[j] and arr1[i] == arr3[k])
        {

            if (find(vec.begin(), vec.end(), arr1[i]) == vec.end())
            {

                vec.push_back(arr1[i]);

                i++;
                j++;
                k++;
            }
        }

        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }

        else
        {
            k++;
        }
    }

    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    
}

// Driver code
int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << "Common Elements are ";
    findCommon(arr1, arr2, arr3, n1, n2, n3);
    return 0;
}