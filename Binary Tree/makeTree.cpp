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
         this->left = nullptr;
         this->right = nullptr;
    }

};

node* buildTree(node *root)
{
    int data;
    cout<<"Enter data\n";
    cin>> data;

    if(data == -1)
        return nullptr;
    
    root = new node(data);
    cout<<"Enter data for left of "<<data << endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for right of "<<data<<endl;
    root->right = buildTree(root->right);
    
    return root;    
}

void printTreeInorder(node *root)
{

    if(!root)
        return;
    printTreeInorder(root->left);
    cout<<root->data<<" ";
    printTreeInorder(root->right);


}

void levelOrderTraversal(node *root)
{

    if(!root)
        return ;
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {

        int  size = q.size();

        for(int i = 0 ; i < size ; i++)
        {

            node *fnode = q.front();
            cout<<fnode->data<<" ";
            if(fnode->left)
                q.push(fnode->left);
            if(fnode->right)
                q.push(fnode->right);
            
            q.pop();

        }

        cout<<endl;
        
    }



}

int main()
{

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root = nullptr;

    root = buildTree(root);
    // printTreeInorder(root);
    levelOrderTraversal(root);
    return 0;
}