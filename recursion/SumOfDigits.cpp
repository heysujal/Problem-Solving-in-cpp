#include<iostream>
using namespace std;


int findSum(int num){


    // if(num==0)
    //     return 0;

    if(num<10)
        return num;

    return num % 10 + findSum(num / 10);
}

int main(){

    int a;
    cin>>a;

    cout << findSum(a);

    return 0;
}