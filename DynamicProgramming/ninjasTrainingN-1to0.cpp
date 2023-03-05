// Recursive solution
// https://www.codingninjas.com/codestudio/problems/ninja-s-training_3621003
#include<bits/stdc++.h>
using namespace std;
// recursive solution
// Going from N-1 to 0
int solve(int day , int last,vector<vector<int>> &points )
{
    
    if(day==0)
    {    
        int maxi = 0;
        for(int i = 0; i <= 2; i++)
        {
            
            if(i!=last)
            {
                maxi = max(maxi, points[0][i]);
                
            }
        }
        
        return maxi;
        
    }
    
    
    
    // general case
    int maxi = 0;
    for(int i = 0; i <= 2 ; i++)
    {    
        if(i!=last)
        {
            int ans = points[day][i] + solve(day-1, i , points);
            maxi = max(maxi, ans);
            
        }
    }
    return maxi;
    
    
}


int ninjaTraining(int n, vector<vector<int>> &points)
{
 
    return solve(n-1,3, points);
}