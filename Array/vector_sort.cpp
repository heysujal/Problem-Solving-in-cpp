#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct Pair{
    int x;
    int y;
};


bool custom_order(Pair p1, Pair p2){

    return p1.y > p2.y;

}

int main(){

    Pair arr[] = {{2, 1}, {1, 0}, {0, 1}};

    sort(arr, arr + 3, custom_order);

    for( auto i: arr)
        cout << i.x << " " << i.y << endl;

    return 0;

}