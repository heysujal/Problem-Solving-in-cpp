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
Node *deleteLastNode(Node *head)
{
    if(head==NULL or head->next==NULL)
        return NULL;
    
    Node *temp = head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    
    temp->next = NULL;
    return head;

}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "before\n";
    printList(head);
    cout << endl;

    head = deleteLastNode(head);
    cout << "after\n";
    printList(head);

    return 0;
}