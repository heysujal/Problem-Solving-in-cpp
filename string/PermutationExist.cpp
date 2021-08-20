#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string patt;
    cin >> patt;
    transform(patt.begin(), patt.end(), patt.begin(), ::tolower);
    //if any permutation of patt exists in s
    int flag = 0;

     

   do{

        if(s.find(patt)!=string::npos){
            flag = 1;
            break;
        }



   }while(next_permutation(patt.begin(), patt.end()));


    if (flag)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}