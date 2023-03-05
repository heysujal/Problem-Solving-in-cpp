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
void levelOrder(node *root)
{
    queue<node *> q;
    q.push(root);
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}

void levelOrder2(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
        
    }
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
int main()
{
    node *root = NULL;
    root = buildTree(root);
     
    
    cout<<endl;
    levelOrder(root);
    cout<<endl;
    levelOrder2(root);

    return 0;
}
