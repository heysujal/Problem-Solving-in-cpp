#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    void solve(int i , int j , int &count, vector<vector<int>>& grid, bool &firstPass)
    {   
        int n = grid.size();
        
        
        if(firstPass)
        {
            
            if( i>=n or j>=n or  grid[i][j] < 0 )
                return;
        
            if(grid[i][j] == 1)
               {    
                    grid[i][j] = 0;
                    count++;
                }
            
            if(i==n-1 and j==n-1)
            {
                firstPass = false;
                solve(n-1, n-1, count, grid, firstPass);
            }
            
            solve(i+1, j, count, grid, firstPass);
            solve(i, j+1, count, grid, firstPass);       
        }
        
        
        if(!firstPass)
        {
            
             if( i<0 or j<0 or  grid[i][j] < 0 )
                return;
            
             if(grid[i][j] == 1)
               {    
                    grid[i][j] = 0;
                    count++;
                }
            
            if(i==0 and j==0)
                return; 
            
            solve(i-1, j, count, grid, firstPass);
            solve(i, j-1, count, grid, firstPass);     
        }
    }
    
    
    
    int cherryPickup(vector<vector<int>>& grid) {
        
        int count = 0;
        bool firstPass = true;
        solve(0 , 0 , count, grid, firstPass);
        return 1;
        
    }
};

int main()
{


Solution s;
vector<vector<int>> grid = {{0,1,-1},{1,0,-1},{1,1,1}};

s.cherryPickup(grid);



}