#include <bits/stdc++.h>
using namespace std;

long int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int how_many_small(string s, int index)
{

    char ch = s[index];

    int count = 0;
    for (int i = index; i < s.size(); i++)
    {
        if (s[i] < ch)
        {
            count++;
        }
    }

    return count;
}

int rank_fun(string s)
{

    long int sum = 0;

    for (int i = 0; i < s.size() - 1; i++)
    {
        sum += how_many_small(s, i) * (fact(s.size() - 1 - i));
    }

    return sum + 1;
}
int main()
{

    string s;
    cin >> s;

    cout << rank_fun(s);

    return 0;
}