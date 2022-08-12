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
Node* insertAtGivenPosition(Node *head, int key , int pos)
{   
    Node *newNode = new Node(key);
  
    
    // insert at first position or linked list is empty
    if(head==NULL and pos > 1)
    {
        return NULL;

    }
    // linked list is empty and we want to insert element at first position
     if ( pos == 1)
     {
            newNode->next = head;
            return newNode;

     }

    int idx =1 ;
    Node* ptr = head;

    while(idx!=pos-1 and ptr!=NULL)
    {
        idx++;
        ptr = ptr->next;

    }
    // if ptr goes beyond limit
    // this means pos is wrong
    if(ptr==NULL)
        return head;

    // we are now just 1 node before the desired position

    newNode->next = ptr->next;
    ptr->next = newNode;



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

    head = insertAtGivenPosition(head, 50, 1);
    cout << "after\n";
    printList(head);

    return 0;
}