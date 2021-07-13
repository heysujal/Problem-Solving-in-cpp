// string palindrome
// recursive method

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int low, int high)
{
        // in case of odd length low==high occurs 
        //  a single character is palindrome
    if((low>high ) || (low==high)){
        return true;
    }

    if(s[high]!=s[low])
        return false;

    return isPalindrome(s, low+1, high -1);

}

int main()
{

    string s = "nitin";
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    int low = 0;
    int high = s.size() - 1;
    cout << isPalindrome(s, low, high);
    return 0;
}