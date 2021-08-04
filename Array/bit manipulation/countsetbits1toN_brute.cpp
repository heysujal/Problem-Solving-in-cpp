#include <bits/stdc++.h>
using namespace std;
// count set bits from 1 to n
int count_bits(int n)
{
    int count = 0;

    while (n > 0)
    {

        count++;
        n = n & (n - 1);
    }

    return count;
 }

// time comlexity O(n*(number of setbits in j))
int main()
{

    int n 
    ;
    cin>> n;
    long int sum = 0;
    for (int j = 1; j <= n;j++){
        sum += count_bits(j);
    }
        // cout << count_bits(n);

    cout << sum;
    
    return 0;
}