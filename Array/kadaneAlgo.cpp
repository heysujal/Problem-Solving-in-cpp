// C++ program to print largest contiguous array sum
#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int n)
{

    int current_sum = 0;
    int overall_sum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        //  add current array element
        current_sum += arr[i];

        overall_sum = max(overall_sum, current_sum);

        // if current_sum is negative then reset it
        current_sum = current_sum < 0 ? 0 : current_sum;
    }

    return overall_sum;
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
