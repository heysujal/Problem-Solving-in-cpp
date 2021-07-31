#include <bits/stdc++.h>
using namespace std;

void find_subset(vector<int> input, vector<int> output, int index)
{
    if (index >= input.size())
    {
        for (int i = 0; i < output.size(); i++)
            cout << output[i] << " ";
        cout << endl;
        return;
    }

    find_subset(input, output, index + 1);
    output.push_back(input[index]);
    find_subset(input, output, index + 1);
}


int main()
{

    vector<int> input = {1, 2, 3};
    vector<int> output;

    find_subset(input, output, 0);

    return 0;
}