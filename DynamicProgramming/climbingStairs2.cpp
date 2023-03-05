#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int climbStairs(int n) {
        
         // Going from N to 0
        
        if(n==1 or n==2)
            return n;
       
        
        int left = climbStairs(n-1);


         int right = climbStairs(n-2);
        
        return left  + right;
        
    }
};

int main(){
Solution s;
cout<<s.climbStairs(2)<<endl;
cout<<s.climbStairs(3)<<endl;
return 0;
}