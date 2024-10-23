#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;

  while (cin >> N) {
    vector<int> array(N);
    vector<int>::iterator result;
    for (int i = 0; i < N; i++) {
      cin >> array[i];
    }

    result = max_element(array.begin(), array.end());
    int value = *result;

    if (value >= 20) {
      cout << 3 << endl;
    } else if (value < 10) {
      cout << 1 << endl;
    } else {
      cout << 2 << endl;
    }
  }

  return 0;
}

