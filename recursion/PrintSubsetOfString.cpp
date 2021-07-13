#include<iostream>
#include<string> 
using namespace std;

void find_subset(string str, string curr = "", int index = 0){

    if(index==str.size()){
        
        
        cout << curr << endl;
        return;
    }

    
    find_subset(str, curr, index + 1);
    find_subset(str, curr + str[index], index + 1);

    
}


int main(){

    string s = "abc";
    find_subset(s);

    return 0;

}
