#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    int minimax = INT_MAX;

    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int N = 1e5 + 2;

    int idx[N];
    for (int i = 0; i < N;i++){
        idx[i] = -1;

    }

    for (int i = 0; i < n;i++){


        if(idx[arr[i]]!=-1){
            minimax = min(minimax, idx[arr[i]]);

        }

        else{

            idx[arr[i]] = i;

        }

    }



if(minimax == INT_MAX)
    cout << "-1" << endl;

    else
    {
        cout<<minimax+1<<endl;
        
    }
    
        return 0;
}