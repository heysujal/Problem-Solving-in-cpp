#include<bits/stdc++.h>
using namespace std;



int partition(vector<int> &nums, int start, int end) {
    int my_pivot = nums[end];
    int small_count = 0;
    for(auto x : nums)
        if(x <= my_pivot)
            small_count++;
    int pivot_index = start + small_count;
    swap(nums[pivot_index], nums[end]);
    int i = start;
    int j = end;
    while(i < pivot_index and j > pivot_index) {
        while(nums[i] < nums[pivot_index])
            i++;
        while(nums[j] > nums[pivot_index])
            j--;
        if(i < pivot_index and j > pivot_index)
            swap(nums[i++], nums[j--]);
    }

    return pivot_index;
}

void quickSort(vector<int> &nums, int start, int end) {
    if(start>=end)
        return;
    int pivot = partition(nums, start, end);
    quickSort(nums, start, pivot-1);
    quickSort(nums, pivot, end);

}

int main() {
    vector<int> nums = {5, 4, 0, 1, 2};
    cout<<"Before\n";
    for(auto x : nums)
        cout<<x<< " ";
    cout<<endl;
    quickSort(nums, 0, nums.size()-1);
    cout<<"After\n";
    for(auto x : nums)
        cout<<x<< " ";
    cout<<endl;


    return 0;
}