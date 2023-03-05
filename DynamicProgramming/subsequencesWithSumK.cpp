// Finding subsequences with sum = K

#include<bits/stdc++.h>
using namespace std;


void findSub(int i , vector<int> &temp, vector<int> &arr, int n , vector<vector<int>> &ans, int target)
{

    if(i==n)
    {
        if(target == 0)
            ans.push_back(temp);

        return ;
    }

    // skip

    findSub(i+1, temp, arr, n, ans, target);

    // pick
    
    temp.push_back(arr[i]);
    findSub(i+1, temp, arr, n , ans , target - arr[i]);
    temp.pop_back();

}


int main(){

vector<int> arr = {1, -2, -1, 0, 0, 1, 1};
int n =arr.size();
vector<int> temp;
vector<vector<int>> ans;
int k=0;
findSub(0, temp, arr, n,ans, k );

for (int  i = 0; i < ans.size(); i++)
{
    for (int j = 0; j < ans[i].size(); j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}


return 0;
}