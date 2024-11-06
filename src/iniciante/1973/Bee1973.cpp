#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int n;
  vector<pair<int, bool>> Worlds;
  long long int worldsStoled = 0;
  long long int sheepsSaved = 0;
  int i = 0;
  int direction = 1;
  cin >> n;
  for (int i = 0; i != n; i++) {
    int sheep;
    cin >> sheep;
    sheepsSaved += sheep;
    Worlds.push_back({sheep, false});
  }
  while (i >= 0 && i < Worlds.size()) {
    auto &[sheeps, hasVisited] = Worlds[i];
    if (!hasVisited) {
      hasVisited = true;
      worldsStoled++;
    }
    if (sheeps <= 0) {
      break;
    }
    if (sheeps % 2 == 0) {
      direction = -1;
    } else {
      direction = 1;
    }
    sheeps--;
    sheepsSaved--;

    i += direction;
  }
  cout << worldsStoled << " " << sheepsSaved << endl;
  return 0;
}
