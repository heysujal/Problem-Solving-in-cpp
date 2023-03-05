#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data";
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    cout << "Enter the left child of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the right child of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrder(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
}

void saveLevelOrder(node *root, vector<vector<int>> &ans)
{
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {

        int size = q.size();
        vector<int> v;
        for (int i = 0; i < size; i++)
        {
            node *temp = q.front();
            q.pop();
            v.push_back(temp->data);
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        ans.push_back(v);
    }
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
int main()
{
    node *root = NULL;
    vector<vector<int>> ans;
    root = buildTree(root);
    cout << endl;

    saveLevelOrder(root, ans);
    cout<<"{";
    for (int i = 0; i < ans.size(); i++)
    {
         cout<<"{";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
         cout<<"}";
    }
 cout<<"}";
    return 0;
}
