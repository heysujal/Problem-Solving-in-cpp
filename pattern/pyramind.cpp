#include <bits/stdc++.h>
using namespace std;

int main() {
  // print pattern for pyramid
  int n = 5;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 4 - i; j++) {
      cout << " ";
    }
    for (int k = 0; k < i * 2 + 1; k++)
      cout << "*";
    cout << endl;
  }
  return 0;
}