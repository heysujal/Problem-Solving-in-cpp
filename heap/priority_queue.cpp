#include<bits/stdc++.h>
using namespace std;
// to check if order of node is sorted with using integer for ordering
class node{

  public:  int data;
    node *next;

    node(int x){
        data = x;
        next= NULL;
    }

};



int main(){

priority_queue<node*> pq;

// default is maxheap
// node *n1 = new node(100);

pq.push(new node(100));
pq.push(new node(10));
pq.push(new node(0));
pq.push(new node(1010));

while(!pq.empty())
{
    cout<<pq.top()->data;
    cout<<endl;
    pq.pop();
}


return 0;
}