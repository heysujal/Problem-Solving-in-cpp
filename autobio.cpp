#include <bits/stdc++.h>
using namespace std;

bool f(int num)
{
    string str = to_string(num);
    cout << "hello";

    unordered_map<int, int> m;
    for (int i = 0; i < str.length(); i++)
    {
        m[str[i] - '0']++;
    }

    for (int i = 0; i < str.length(); i++)
    {
        auto it = m.find(i);
        if (it != m.end() and it->second != str[i] - '0')
            return false;
    }

    return true;
}

int main()
{
    int number = 123;

    cout << f(number);
    return 0;
}