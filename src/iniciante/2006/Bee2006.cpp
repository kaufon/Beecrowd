#include <bits/stdc++.h>
using namespace std;
int main (int argc, char *argv[]) {
  vector<int> numbers;
  int n,pos = 0;
  cin >> n;
  for (int i =0;i!=5;i++) {
    int number;
    cin >> number;
    if (number == n) {
      pos++;
      
    }
  }
  cout << pos << endl;
  return 0;
}
