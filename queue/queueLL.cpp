#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* next;
    // Node(int x){
    //     data = x;
    //     next = NULL;
    // }
};

class Queue{
private: Node* front;
        Node *rear;
public:
        Queue(){
            front = NULL;
            rear = NULL;

        }    
    //Function to check if queue is empty or not
        bool isEmpty(){
            if(front==NULL and rear==NULL){
                return true;

            }
            else{
                return false;

            }
        }

    //function to enter elements in queue
    void enqueue ( int value )
    {
     Node *ptr = new Node();
     ptr->data= value;
     ptr->next = NULL;

     //If inserting the first element/node
     if( front == NULL )
     {
      front = ptr;
      rear = ptr;
     }
      
      rear ->next = ptr;
      rear = ptr;
      
    }
    //function to delete/remove element from queue
    void dequeue ( )
    {
     if( isEmpty() )
     cout<<"Queue is empty\n";
     else
     //only one element/node in queue.
     if( front == rear)
     {
      delete(front);
      front = rear = NULL;
     }
     else
     {
      Node *ptr = front;
      front = front->next;
      delete(ptr);
     }
    }
    //function to show the element at front
    void showfront( )
    {
    if( isEmpty())
    cout<<"Queue is empty\n";
    else
    cout<<"element at front is:"<<front->data;
    }

    //function to display queue
    void displayQueue()
    {
    if (isEmpty())
    cout<<"Queue is empty\n";
    else
    {
    Node *ptr = front;
    while( ptr !=NULL)
    {
    cout<<ptr->data<<" ";
    ptr= ptr->next;
    }
    }
    }




};


//Main Function
int main()
{
  
  Queue q;
  q.enqueue(1);
  q.enqueue(21);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(42);
  q.displayQueue();cout<<endl;

  q.enqueue(42);
  q.displayQueue();cout<<endl;
  q.showfront();cout<<endl;
   
  q.dequeue();cout<<endl;
  q.displayQueue();cout<<endl;
  q.showfront();
 


 return 0;
}
