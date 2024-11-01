#include <bits/stdc++.h>
#include <cctype>
#include <ios>
#include <string>
using namespace std;
string DecToHex(int dec) {
  stringstream ss;
  ss << hex << uppercase << dec;
  return ss.str();
}
int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  cout << DecToHex(n) << endl;
  return 0;
}
