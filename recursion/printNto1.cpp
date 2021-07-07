#include <bits/stdc++.h>
using namespace std;

void print_recursive(int n)
{

    if (n == 0)
        return;

    cout<<n<< " ";
    print_recursive(n - 1);
}

int main()
{

    int n = 10;
 
    print_recursive(n);
    return 0;
}