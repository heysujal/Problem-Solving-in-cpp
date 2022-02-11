#include<bits/stdc++.h>
using namespace std;
int productofdigits(int num){

if(num < 10)
    return num;

return (num%10) + productofdigits(num/10);



}

int main(){
cout<<productofdigits(115)
;
return 0;
}