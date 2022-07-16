#include<iostream>
#include<queue>

using namespace std;

int main(){
    

    queue<int> q;
     
    q.push(21);
    q.push(62);
    q.push(26);
    q.push(27);
    cout<<"Size of queue is "<<q.size();
    

    cout<<q.front()<<endl;
    q.pop();
    q.pop();
    cout<<"Size of queue is "<<q.size();
    // q.pop();
    cout<<q.front();

    cout<<endl;
    cout<< q.back();


    
    return 0;

}