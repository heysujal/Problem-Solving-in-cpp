#include <bits/stdc++.h>
using namespace std;


// print 1 to n
// converted to tail recursion
void print_recursive(int n)
{   

    if(n==0)
        return;

    static int i = 0;
    cout<< (n) - (n-1 - i);
    i++;
    print_recursive(n - 1);
}

int main()
{

    int n = 10;

    print_recursive(n);
    return 0;
}