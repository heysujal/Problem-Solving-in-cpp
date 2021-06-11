// butterfly pattern

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "enter n";
    cin >> n;
    // for upper half
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << "8";
        }

        int space = 2 * n - 2 * i;

        for (int j = 1; j <= space; j++)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "8";
        }
        cout << endl;
    }

    // for lower half

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "8";
        }

        int space = 2 * n - 2 * i;

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "8";
        }

        cout << endl;
    }

    return 0;
}