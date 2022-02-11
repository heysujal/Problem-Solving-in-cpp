#include <bits/stdc++.h>
using namespace std;
int revNum(int n)
{

    int digits = 0;
    int temp = n;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    if (n < 10)
        return n;

    return (n % 10) * (pow(10, digits - 1)) + revNum(n / 10);
}
bool isPalindrome(int n)
{
    if (n == revNum(n))
    {
        return true;
    }

    return false;
}
int main()
{
    cout<<isPalindrome(11211);

    return 0;
}