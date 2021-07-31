#include <bits/stdc++.h>
using namespace std;

void print_array(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }
    cout<<endl;
}

void insert(vector <int> &v , int temp){

    if(temp >= v[v.size() - 1] || v.size() == 0){
        v.push_back(temp);
        return;
    }

    int value = v[v.size() -1];
    v.pop_back();
    insert(v, temp);
    v.push_back(value);
}
void sort_array(vector <int> &v)
{   

    if(v.size()==1)
        return;

    
    int temp = v[v.size() - 1];
    v.pop_back();

    sort_array(v);

    insert(v, temp);

}
int main()
{
    vector<int> v = {1, 2, 4, 6, 5, 0};
    print_array(v);
    sort_array(v);
    print_array(v);
    return 0;
}