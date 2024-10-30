#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  map<int, int> dic;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int T;
    cin >> T;
    dic[i] = T;
  }

  pair<int, int> minimum = *dic.begin();

  for (auto it : dic) {
    if (it.second < minimum.second) {
      minimum = it;
    }
  }
  cout << minimum.first + 1 << endl;

  return 0;
}

