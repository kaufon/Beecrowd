
#include <bits/stdc++.h>
using namespace std;
const int notas[6] = {2, 5, 10, 20, 50, 100};
bool troco(int client, int clerk) {
  bool flag = true;
  int result = 0;
  int change = clerk - client;
  while (flag) {
    for (int i = 5; i >= 0;) {
      if (notas[i] <= change) {
        change -= notas[i];
        result++;
      } else {
        i--;
      }
    }
    if (result != 2 || result == 0) {
      flag = false;
    }

    break;
  }
  return flag;
}
int main(int argc, char *argv[]) {
  int client, clerk;
  do {
    cin >> client >> clerk;
    if (client == 0 && clerk == 0) {
      break;
    }
    bool result = troco(client, clerk);
    if (result) {
      cout << "possible" << endl;

    } else {
      cout << "impossible" << endl;
    }

  } while (client != 0 && clerk != 0);
  return 0;
}
