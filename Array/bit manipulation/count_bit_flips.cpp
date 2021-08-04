#include <bits/stdc++.h>
using namespace std;
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

int main()
{

        int a;
        int b;
        cin>> a;
        cin>>b;

        int res = (a ^ b);

        cout<< count_bits(res);
        



}