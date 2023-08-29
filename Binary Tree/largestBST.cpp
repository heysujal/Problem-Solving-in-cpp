#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
class Solution
{
public:
    long long prev = LONG_MIN;
    bool inOrder(Node *root)
    {
        if (!root)
            return true;
        bool left = inOrder(root->left);
        if (prev < root->data)
            prev = root->data;
        else
            return false;
        bool right = inOrder(root->right);
        return left and right;
    }

    bool isValidBST(Node *root)
    {
        prev = LONG_MIN;
        return inOrder(root);
    }

    int countNodes(Node *root)
    {
        return !root ? 0 : 1 + countNodes(root->left) + countNodes(root->right);
    }
    int largestBst(Node *root)
    {
        if (!root)
            return 0;
        if (isValidBST(root))
            return countNodes(root);

        int left = largestBst(root->left);
        int right = largestBst(root->right);

        return max(left, right);
    }
};

int main()
{

    return 0;
}