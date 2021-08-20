#include <bits/stdc++.h>
using namespace std;

int fun(string s)
{

    for (int i = 0; i < s.length(); i++)
    {

        int flag = 1;

        for (int j = i + 1; j < s.length(); j++)
        {

            if (s[i] == s[j])
            {

                flag = 0;

                break;
            }
        }

        if (flag == 1)
            return i;
    }

    return -1;
}

int main()
{

    string s;
    cin >> s;
    cout << fun(s);
    return 0;
}