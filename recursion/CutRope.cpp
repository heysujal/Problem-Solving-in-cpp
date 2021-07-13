// given rope of n lenght. Cut it into maximum number of pieces

#include <bits/stdc++.h>
using namespace std;
// input 9 
// ans should be -1
int makeCut(int n, int a =  2, int b = 2, int c =2)
{   
    if( n < 0){
        return -1;
    }

    if(n==0){
        return 0;
    }
 

    int res =  max(makeCut(n - a), max(makeCut(n - b), makeCut(n - c)));

    if(res== -1) return -1;

    return res+1;
}
int main()
{

    int n = 9;

    cout << makeCut(n);

    return 0;
}