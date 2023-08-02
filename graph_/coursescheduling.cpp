#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void topoSort(int node, vector<int> &vis, stack<int> &st, vector<int> adj[]) {

    vis[node] = 1;

    for (auto n : adj[node]) {
      if (!vis[n]) {
        topoSort(n, vis, st, adj);
      }
    }

    st.push(node);
  }
  bool canFinish(int N, vector<vector<int>> &pq) {
    // make adjacency list
    vector<int> adj[N];
    for (auto r : pq) {
      adj[r[1]].push_back(r[0]);
    }
    vector<int> vis(N, 0);
    stack<int> st;

    for (int i = 0; i < N; i++) {
      if (!vis[i]) {
        topoSort(i, vis, st, adj);
      }
    }

    if (st.size() == N)
      return true;
    return false;
  }
};

int main() {
  Solution S;
  int N = 2;
  vector<vector<int>> pq;
  pq.push_back({0, 1});
  pq.push_back({1, 0});
  if (S.canFinish(N, pq))
    cout << "yes";
  else
    cout << "No";

  return 0;
}