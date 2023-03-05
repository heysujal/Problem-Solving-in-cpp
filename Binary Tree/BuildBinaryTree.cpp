#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout<<"Enter the data";
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    root = new node(data);
    cout<<"Enter the left child of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the right child of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}



// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
int main()
{
    node *root = NULL;
    root = buildTree(root);
    cout<<endl;
    inorder(root);
    

    return 0;
}

 