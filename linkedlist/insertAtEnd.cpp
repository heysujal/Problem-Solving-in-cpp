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
Node *insertAtEnd(Node *head, int key)
{
    Node *temp = new Node(key);
    // LL is empty
    if (head == NULL)
    {

        return temp;
    }

    Node *it = head;
    while (it->next != NULL)
    {
        it = it->next;
    }

    it->next = temp;

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

    head = insertAtEnd(head, 50);
    cout << "after\n";
    printList(head);

    return 0;
}