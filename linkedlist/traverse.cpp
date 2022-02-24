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
// print without recursion
//  void traverseList(Node *head){
//      Node *curr = head;
//      while(curr!=NULL){
//          cout<<curr->data;
//          cout<<" "
//          ;
//          curr = curr->next;

//     }
// }

// print with recursion

void printList(Node *head)
{

    if (head == NULL)
    {
        return;
    }

    cout << head->data << " ";
    printList (head->next);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // traverseList(head);

    printList(head);
    return 0;
}