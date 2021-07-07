// string palindrome


#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(string s, int low , int high){
    int flag = 0;

    for (int i = 0; i < s.size() /2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            flag = 1;
            break;
        }

   }

   if(!flag)
       return true;

   return false;
}

int main(){

    string s = "nitin";
    int low = 0;
    int high = s.size() -1;
    cout << isPalindrome(s, low, high);
     return 0;

}