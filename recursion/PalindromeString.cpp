#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int start, int end)
{
    // for nittin 
    if(start > end){
        return true;
    }

    if(start == end){
        return true;
    }
    
    bool res= isPalindrome(s, start + 1, end - 1);


      if(res and (s[start]==s[end])){

          return true;
      }  


     else{
         return false;
     }
}

int main()
{

    // now str is a pointer to string
    string str[] = {"nittin", "nitin", "Sujal","1221", "111","123"};

    int num_strings = sizeof(str) / sizeof(str[0]);

for (int i = 0; i < num_strings; i++)
{
       int start = 0;
       int end = str[i].size() - 1;

              if (isPalindrome(str[i], start, end))
              {
                  cout << str[i] << " : Palindrome" << endl;
              }

              else
              {
                  cout << str[i]<<" : Not palindrome"<<endl;
              }
}


 




    return 0;
}