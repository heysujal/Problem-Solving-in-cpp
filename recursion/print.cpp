#include <bits/stdc++.h>
using namespace std;

void print_recursive(int n)
{
    if( n == 0){
        return;
        
    }

    print_recursive(n-1);
    cout << n << ' ';
}

int main()
{

    int n = 10;

    print_recursive(n);
    return 0;
}