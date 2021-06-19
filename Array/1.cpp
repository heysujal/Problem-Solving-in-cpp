#include <iostream>
#include <array>

using namespace std;

void printArray(const array<int, 5> &n)
{
    std::cout << "length: " << n.size() << endl;

    for (int j = 0; j < n.size(); j++)
    {
        cout << "n[" << j << "] = " << n[j] << endl;
    }
}

int main()
{

    array<int, 5> n = {1, 2, 3, 4, 5};

    printArray(n);

    return 0;
}