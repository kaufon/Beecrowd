
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[]) {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int Number;
    bool primo = true;
    cin >> Number;
    for (int j = 1; j < Number; j++) {
      if (Number % j == 0 and j != 1 and j != Number) {
        primo = false;
      }
    }
    if (primo) {
      printf("%d eh primo\n", Number);

    }

    else {
      printf("%d nao eh primo\n", Number);
    }
  }
  return 0;
}
