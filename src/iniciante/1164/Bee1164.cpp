#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[]) {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int Number, count = 0;
    cin >> Number;
    for (int j = 1; j < Number; j++) {
      if (Number % j == 0) {
        count += j;
      }
    }
    if (count == Number) {
      printf("%d eh perfeito\n", Number);

    }

    else {
      printf("%d nao eh perfeito\n", Number);
    }
  }
  return 0;
}
