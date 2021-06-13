// newapproach
#include <iostream>
using namespace std;
int main()
{
    int n;
    // cout << "enter n";
    // cin >> n;
    n = 5;
    int k;
    for (int i = 1; i <= n; i++)
    {
        k = i;

        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j < i)
                cout << k--;
            else if (j >=i )
            {
                cout << k++;
            }
        }
        cout << endl;
    }

    return 0;
}
