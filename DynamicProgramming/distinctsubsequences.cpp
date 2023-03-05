#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int solve(int i, string s, string &temp, string &t) {
	if (i == s.length()) {
		 
         if(temp == t)
            return 1;
		return 0;
	}
	//picking 
	temp = temp + s[i];
	int pick = solve(i + 1, s,  temp, t);
	//poping out while backtracking
	temp.pop_back();
	int skip = solve(i + 1, s,  temp, t);

    return pick + skip;
}
    int numDistinct(string s, string t) {
        string temp;
        return solve(0, s,temp, t);
    }
};


int main(){


    Solution sol;
    string s = "anacondastreetracecar";
    string t = "contra";
     
    cout<< sol.numDistinct(s,t);

    return 0;
}