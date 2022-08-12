#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
 
// print with recursion

// void printList(Node* head)
// {

//     if(head==NULL)
//         return;
//     cout<<head->data<< " ";
//     printList(head->next);



// }

void printList(Node* head)
{
    if(head==NULL)
        return;
    while (head!=NULL)
    {   
        cout<<"address of head "<<head<<" ";
        cout<<head->data<<endl;
        head=head->next;

    }
    cout<<endl;

    cout<<head;


}


int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // traverseList(head);
    cout<<head<<endl;

    printList(head);
    cout<<endl<<head<<endl;
    return 0;
}