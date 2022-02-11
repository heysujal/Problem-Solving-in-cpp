#include <bits/stdc++.h>
using namespace std;

int count0(int n, int count)
{

    if (n == 0)
        return count;
  
    if (n % 10 == 0)
        count++;
    return count0(n / 10, count);
}

int main()
{
    int n = 101020;

    cout << count0(n, 0);

    return 0;
}