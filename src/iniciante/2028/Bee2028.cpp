#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]) {
  int n;
  int testNumber = 1;
  while (cin >> n) {
    int count = 0;
    vector<int> Sequence;
    Sequence.push_back(0);
    for (int i = 0; i != n + 1;) {
      for (int j = 0; j != i; j++) {
        Sequence.push_back(i);
      }
      if (count == i) {
        i++;
      }
      count++;
    }

    if (Sequence.size() == 1) {
      printf("Caso %d: 1 numero\n", testNumber);
    } else {
      printf("Caso %d: %zu numeros\n", testNumber, Sequence.size());
    }
    for (int i = 0; i != Sequence.size(); i++) {
      if (i + 1 == Sequence.size()) {
        cout << Sequence[i] << endl;
      } else {
        cout << Sequence[i] << " ";
      }
    }
    testNumber++;
    cout << endl;
  }
  return 0;
}
