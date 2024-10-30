#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int a, b, r, q;
  cin >> a >> b;
  if (a < 0) {
    r = ((a % b) + abs(b)) % abs(b);
    q = (a-r)/b;
  } else {
    q = a / b;
    r = a % b;
  }
  printf("%d %d\n",q,r);
  return 0;
}
