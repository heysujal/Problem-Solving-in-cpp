#include<bits/stdc++.h>
using namespace std;
//corner cases
// if(row==1 and col ==1 ) No columns cout<<arr[0][0];
// if(row==2 and col==1)

void fun(vector<vector<int>>& matrix)
{

int m = matrix.size();
int n = matrix[0].size();


int i;
 int j ;

int  flag = 1;


for(i = 0 ; i < m  ; i++){

if( flag ==1){

    for(int j = 0; j < n; j++){
        cout<<matrix[i][j]<<" ";
        
    }
    flag = -1;
i++;
 

}
    
    if(flag == -1){
        for(int j =n-1; j>=0;j--){
cout<<matrix [i][j]<<" ";

        }
    flag =1;
    
    }

    
}

}
int main(){

vector<vector<int>> matrix = {{1,2,3,4},
{5,6,7,8},
{9,10,11,12}};


fun(matrix );



return 0;
}