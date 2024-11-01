#include <bits/stdc++.h>
#include <utility>
using namespace std;
int main(int argc, char *argv[]) {
  int n1, n2;
  cin >> n1 >> n2;
  if (n1 < n2) {
    swap(n2, n1);
  }
  cout << n1 << endl;

  return 0;
}
