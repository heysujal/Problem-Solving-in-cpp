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
int getLen(Node *head)
{
    int len = 0;

    if (head == NULL)
        return len;

    while (head != NULL)
    {
        head = head->next;
        len++;
    }
    return len;
}
int nthNodeFromLast(Node *head, int n)
{
    int len = getLen(head);

    if (head == nullptr or n > len)
        return -1;

    int times = len - n;

    Node *curr = head;

    while (times > 0)
    {
        curr = curr->next;
        times--;
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

    int nth_node_from_last = nthNodeFromLast(head, 2);

    cout << nth_node_from_last;

    return 0;
}
