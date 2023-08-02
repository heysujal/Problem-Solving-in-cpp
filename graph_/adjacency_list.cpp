#include<bits/stdc++.h>
using namespace std;

int main() {

    int n ;
    int m;
    cin>>n>>m;
    vector<int> adj[n+1];

    for(int i = 0; i < m; i++)
    {
        int u ;
        int v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    cout << "Displaying the graph:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "-> ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout <<  adj[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}