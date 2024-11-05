#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int jumpH, n;
  cin >> jumpH >> n;
  vector<int> jumps;
  bool hasFailed = false;
  for (int i = 0; i != n; i++) {

    int j;
    cin >> j;
    jumps.push_back(j);
  }
  for (int i = 0; i < jumps.size() - 1; i++) {
    if (abs(jumps[i] - jumps[i + 1]) > jumpH) {
      hasFailed = true;
      break;
    }
  }
  if (hasFailed) {
    cout << "GAME OVER" << endl;

  } else {
    cout << "YOU WIN" << endl;
  }
  return 0;
}
