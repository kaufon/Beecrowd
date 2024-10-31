#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  while (n--) {
    int terms;
    cin >> terms;
    int result = 0;
    int even = 1;

    for (int term = 0; term != terms; term++) {
      result += even;
      even = even * -1;
    }
    cout << result << endl;
  }
  return 0;
}
