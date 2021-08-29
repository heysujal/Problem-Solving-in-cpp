class Solution
{
public:
    int bs(vector<int> arr, int i, int target)
    {
        int low = 0;

        int high = arr.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target)
            {
                if (mid != i)
                    return mid;
                else
                    return -1;
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

        return -1;
    }

    bool checkIfExist(vector<int> &arr)
    {

        int n = arr.size();
        // sorts the array
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {

            if (bs(arr, i, 2 * arr[i]) != -1)
            {

                return true;
            }
        }
        return false;
    }
};