// Linked list template

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
void printList(Node *head)
{

    if (head == NULL)
    {
        return;
    }

    cout << head->data << " ";
    printList(head->next);
}
int getLen(Node* head)
{
    int len = 0;

    if(head==NULL)
        return len;

    while (head!=NULL)
    {
        head=head->next;
        len++;

    }
    return len;

    
}
int getMiddle(Node* head)
{
    int toTraverse = getLen(head)/2;
    Node* curr = head;
    while(toTraverse--)
    {
        curr = curr->next;

    }

    return curr->data;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    int  middle = getMiddle(head);

    cout<<"Linked list: ";
    cout<<endl;
    printList(head);
    cout<<endl;
    cout<<"middle of the linked list is\n";
    cout<<middle;

    return 0;
}
