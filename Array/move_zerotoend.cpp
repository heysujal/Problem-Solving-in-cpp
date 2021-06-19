#include <bits/stdc++.h>
using namespace std;
int main()
{

   

    int arr[] = {8, 5, 0, 10, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]);



    // assume that j is giving position of 0 in array
    int j =0;

    for (int i = 0; i < n;i++){

        if(arr[i]!=0){
            
            if(i!=j)
                swap(arr[i], arr[j]);


            j++;

        }



        // printing after every iteration
        int k = 0;
        while (k < n)
        {
            cout << arr[k] << " ";
            k++;
        }
        cout << endl;
    }

    
        return 0;
}