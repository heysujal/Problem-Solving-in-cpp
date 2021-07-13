#include <bits/stdc++.h>
using namespace std;

 void tower_of_hanio(int n, char A, char B, char C){

     if(n==1){
         cout<<"Move from"<< A <<" to "<<C<<endl;
         return;

     }
// Move n-1 discs from A to B using C as an auxiliary
    tower_of_hanio(n-1, A, C, B);
    // move nth disc from A to C
    cout << "Move from " << A << " to " << C << endl;
    // move n-1 disc from B to C using A as an Auxiliary
    tower_of_hanio(n - 1, B, A, C);
 }

int main()
{
    int n = 3;
    tower_of_hanio(n, 'A','B', 'C');
    return 0;
}