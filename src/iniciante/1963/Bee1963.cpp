#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  double n1, n2;
  cin >> n1 >> n2;
  double value = (n2 * 100 / n1) - 100;
  printf("%.2lf%%\n",value);

  return 0;
}
