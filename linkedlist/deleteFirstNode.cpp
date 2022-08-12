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
Node *deleteFirstNode(Node *head)
{
    if(head==NULL)
        return NULL;

    Node *temp = head->next;

    delete head;
    return temp;
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

    head = deleteFirstNode(head);
    cout << "after\n";
    printList(head);

    return 0;
}