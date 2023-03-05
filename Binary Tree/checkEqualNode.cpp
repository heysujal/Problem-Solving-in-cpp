#include<bits/stdc++.h>
using namespace std;
class node{
    public : int data;
            node *left;
            node *right;

            node(int data){
                this->data = data;
                this->left = NULL;
                this->right = NULL;
            }
};

int main(){
node n1(5), n2(4);

cout<<n1;
// if(n1 == n2)
//     return 111;
// else
//     return 000;

return 0;
}