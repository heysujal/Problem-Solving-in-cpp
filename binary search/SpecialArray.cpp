#include <bits/stdc++.h>
using namespace std;
const int cinTerminator = -1;
int bs(vector<int> &arr, int target)
{

    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            while(arr[mid-1]==target){
                mid -= 1;
            }
            return mid;
        }

        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {

            low = mid + 1;
        }
    }

    return (low == arr.size()) ? -1 : low;
}

 
int specialArray(vector<int> &nums)
{
    int length = nums.size();   
    sort(nums.begin(), nums.end());
    for (int i = 0; i <  length - (i > 0 ? nums[i - 1] : 0); ++i)
    {
        if (nums[i] >=  length - i)
        {
            return  length - i;
        }
    }
    return -1;
}
 

int main()
{
   

     
        vector<int> arr;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;

            arr.push_back(ele);

        }
         
        cout << specialArray(arr) << endl;
    

    return 0;
}