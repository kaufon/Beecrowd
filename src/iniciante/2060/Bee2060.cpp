#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]) {
  int by2 = 0, by3 = 0, by4 = 0, by5 = 0, n;
  cin >> n;
  while (n--) {
    int target;
    cin >> target;
    if (target % 2 == 0) {
      by2++;
    }
    if (target % 3 == 0) {
      by3++;
    }
    if (target % 4 == 0) {
      by4++;
    }
    if (target % 5 == 0) {
      by5++;
    }
  }
  printf("%d Multiplo(s) de 2\n", by2);
  printf("%d Multiplo(s) de 3\n", by3);
  printf("%d Multiplo(s) de 4\n", by4);
  printf("%d Multiplo(s) de 5\n", by5);

  return 0;
}
