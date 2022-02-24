#include <bits/stdc++.h>
using namespace std;

// void Remove 'a'

string removeA(string up)
{
    if (up == "")
        return "";

    char ch = up[0];

    if (ch == 'a')
    {
        return removeA(up.substr(1));
    }
    else
    {
        return ch + removeA(up.substr(1));
    }
}

int main()
{

    string s = "abccada";

    // passing Raw string
    cout << removeA(s);
    return 0;
}