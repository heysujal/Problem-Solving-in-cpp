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
//  the main idea is to use two pointers
// first and second
// start first from nth node from starting
// start second from the first node

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

    if (head == NULL or n > getLen(head) or n < 0)
        return -1;

    Node *first = head;
    Node *second = head;

    while (n--)
    {

        first = first->next;
    }

    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }

    return second->data;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
  int nth_node_from_last;

     nth_node_from_last = nthNodeFromLast(head, 1);

    cout << nth_node_from_last<<endl;
     nth_node_from_last = nthNodeFromLast(head, 2);

    cout << nth_node_from_last<<endl;
     nth_node_from_last = nthNodeFromLast(head, 3);

    cout << nth_node_from_last<<endl;
     nth_node_from_last = nthNodeFromLast(head, 4);

    cout << nth_node_from_last<<endl;
     nth_node_from_last = nthNodeFromLast(head, 5);

    cout << nth_node_from_last<<endl;
     nth_node_from_last = nthNodeFromLast(head, 6);

    cout << nth_node_from_last<<endl;
     nth_node_from_last = nthNodeFromLast(head, 7);


    cout << nth_node_from_last<<endl;
     nth_node_from_last = nthNodeFromLast(head, -1);

    cout << nth_node_from_last<<endl;

    return 0;
}
