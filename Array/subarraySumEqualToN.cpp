// O(n2)Solution
//  position of subarray with sum equal to givenSum 
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int arr[n];
    int givenSum = 12;
    int startPos = -1;
    int endPos = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {

            sum += arr[j];
            // cout << sum << " ";

            if (sum == givenSum)
            {
                startPos = i + 1;
                endPos = j + 1;
                break;
                
            }
        }

        // cout << endl;
    }
    cout << "Starting position is " << startPos << " Ending position is  " << endPos;

    return 0;
}