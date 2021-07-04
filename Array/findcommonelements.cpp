// find common elements in 3 arrays

// C++ program to print common elements in three arrays
#include <bits/stdc++.h>
using namespace std;
// naive approach
// This function prints common elements in ar1
void findCommon(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{

    for (int i = 0; i < n1; i++)
    {

        for (int j = 0; j < n2; j++)
        {
            if (arr2[j] == arr1[i])
            {
                int flag = 0;

                for (int k = 0; k < n3; k++)
                {

                    if (arr3[k] == arr1[i])
                    {
                        cout << arr1[i] << " ";
                        flag = 1;
                        break;
                    }
                }

                if(flag==1){
                    break;
                }
            }
        }
    }
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
