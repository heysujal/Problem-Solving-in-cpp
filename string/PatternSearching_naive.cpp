#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    string t;
    cin >> s;
    cin >> t;
    int n = s.size();
    int m = t.size();
    vector<int> vec;


    for (int i = 0;
         i <= n - m; i++)
    {

        int k = 0;

        for (int j = 0; j < t.size(); j++)
        {
            if (s[i + k] == t[k])
            {

                k++;
            }
            else
            {   
                break;
            }
        }

        if(k==t.size())
            vec.push_back(i);

    }

    for (auto x: vec)
        cout << x<<" ";
        return 0;
}