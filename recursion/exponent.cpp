#include <bits/stdc++.h>
using namespace std;

int find_ans(int base, int pow)
{

    if (pow == 0)

        return 1;


    
    return base * find_ans(base, pow - 1);
}
int main()
{

    int base;
    int pow;

    cin >> base;
    cin >> pow;
    cout << find_ans(base, pow);
    return 0;
}