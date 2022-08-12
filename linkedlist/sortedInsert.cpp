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
Node *sortedInsert(Node *head, int key)
{
    // make a new node
    Node *newNode = new Node(key);

    if (head == NULL)
        return newNode;

    // if key is less than first node

    if (key <= head->data)
    {
        newNode->next = head;
        return newNode;
    }

    Node *curr = head;

    Node *prev = NULL;
    while (curr!=NULL and key > curr->data)
    {
        prev = curr;
        curr = curr->next;
    }

    newNode->next = prev->next;
    prev->next = newNode;
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

    head = sortedInsert(head, 15);
    head = sortedInsert(head, 0);
    head = sortedInsert(head, 45);
    head = sortedInsert(head, -1);
    cout << "after\n";
    printList(head);

    return 0;
}
