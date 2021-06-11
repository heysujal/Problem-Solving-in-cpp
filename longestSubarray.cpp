// apna college practice Question in notes
// longestSubarray
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int curr = 2; // minimum length of a subarray
    
        int ans = 2;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 1; i < n; i++)
        {
                // pd is like common differnece in arithmetic Progression
            int pd = arr[i] - arr[i - 1];
            if (arr[i + 1] - arr[i] == pd)
            {
                curr += 1;
                ans = max(curr, ans);
            }

            else
            {
                curr = 2;
            }
        }

        cout << ans << endl;
    }
    return 0;
}