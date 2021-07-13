#include <bits/stdc++.h>
using namespace std;

 
int josephus(int n, int k)

{

    if (n == 1)
        return 0;

    else
        return (josephus(n - 1, k) + k) % n;
}

int main()
{

    int n = 1 ;

    cout << josephus(n, 3);

    return 0;
}