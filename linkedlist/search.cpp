// search in linked list


#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;

    }
};
// int searchLL(Node* head, int key)
// {
 

//     int idx = 0;

//     Node* temp = head;

//     while(temp!=NULL)
//     {
//         if(temp->data == key)
//             return idx;
//         idx++;
//         temp=temp->next;

//     }    
// return -1;

// }

int recursiveSearchLL(Node* head, int key,int idx)
{   
     
    if(head==NULL)
        return -1;
    if(head->data==key)
        return idx;
    
     
    return recursiveSearchLL(head->next, key,idx+1);

}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    int key = 20;


    // int idx = searchLL(head, key);
    int idx = recursiveSearchLL(head, key,0);

    cout<<"Position is "<<idx+1;

 
    
    return 0;
}