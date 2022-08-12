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

Node* insertAtBegin(Node *head, int key)
{   
    if(head==nullptr)
        return NULL;
Node* temp = head;
Node *newNode  = new Node(key);
newNode->next= temp;
return newNode;



}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "LL before insertion" << endl;
    printList(head);
    cout << endl;

    head = insertAtBegin(head, 9);

    cout << "after " << endl;
    printList(head);
    cout << endl;
     

    return 0;
}