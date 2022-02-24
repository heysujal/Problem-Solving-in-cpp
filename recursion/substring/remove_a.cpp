#include<bits/stdc++.h>
using namespace std;

// void Remove 'a'

void RemoveA(string p ,string up){

 if(up.size()==0){
     cout<<p<<" ";
     return ;

 }
char ch = up[0];

if(ch=='a')
    {
        
         RemoveA(p, up.substr(1));

    }

    else{
         RemoveA(p+ ch, up.substr(1));
    }
 

}


int main(){

string s = "abccada";
RemoveA("", s);
return 0;
}