#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    int solve(int i , int n )
    {
        
        if(i==n)
            return 1;
        if(i>n)
               return 0;
        
        
        int one = solve(i+1, n);
        int two = solve(i+2, n);
        return one + two;
        
    }
    
    int climbStairs(int n) {
        
         // Going from 0 to N
        return solve(0, n);
        
        
    }
};

int main(){

Solution s;

cout<<s.climbStairs(2)<<endl;
cout<<s.climbStairs(3)<<endl;

return 0;
}
