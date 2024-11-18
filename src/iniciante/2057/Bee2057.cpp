#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int inital, timeTaken, fuse, result;
  cin >> inital >> timeTaken >> fuse;
  inital = (inital + timeTaken) % 24;
  result = inital + fuse;
  if (result <= 0) {
    result = 24 + result;
  }
  if (result == 24) {
    result = 0;
    
  }
  cout << result << endl;
  return 0;
}
