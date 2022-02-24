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
void reverseList(Node *head)
{
    vector<int> arr;

    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        arr.push_back(curr->data);
    }

    for(Node* curr  = head; curr!=NULL ;curr = curr->next){
        curr->data = arr.back();
        arr.pop_back();

    }
}
void printList(Node *head)
{

    if (head == NULL)
    {
        return;
    }

    cout << head->data << " ";
    printList(head->next);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printList(head);
     reverseList(head);

    cout << endl;
    printList(head);

    return 0;
}