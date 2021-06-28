#include<iostream>
#include<cmath>
using namespace std;

int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int ncr(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));

}
int main(){
    int n;
    cin>>n;
    ;

    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= i;j++){
            cout << ncr(i - 1, j - 1) << " ";
        }
        cout << endl;
    }

        return 0;
}