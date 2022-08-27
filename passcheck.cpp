#include<bits/stdc++.h>
using namespace std;


bool isValid(string &str)
{   
    if(str.size() < 8 or str.size() > 15)
        return false;
	// Write your code here.
    bool isNum = false;
     bool isSpecial = false;
     bool isSmall = false;
    bool isCaps = false;
    
    for(int i =0 ; i < str.size() ; i++)
    {
        if(isdigit(str[i]))
            isNum = true;
        else if(str[i] >= 'a' and str[i] <= 'z')
            isSmall = true;
        else if(str[i]>='A' and str[i] <= 'Z')
            isCaps = true;
        else if(str[i]!=' ')
            isSpecial==true;
        
            
    }
   
if(isNum and isCaps and isSmall and isSpecial) 
     return true;
return false;
  
}

int main(){

int t;
cin>>t;

while(t--)
{
    string s;
    cin>>s;
    (isValid(s))?cout<<"true\n":cout<<"false\n";

}

return 0;
}