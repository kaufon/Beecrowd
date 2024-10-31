#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int n;
  map<string, string> Players;
  cin >> n;
  while (n--) {
    string Player1, Player1Move, Player2, Player2Move;
    int n1, n2, result;
    cin >> Player1 >> Player1Move >> Player2 >> Player2Move;

    Players[Player1] = Player1Move;
    Players[Player2] = Player2Move;
    cin >> n1 >> n2;
    result = n1 + n2;
    if (result % 2 != 0) {
      for (auto it : Players) {
        if (it.second == "IMPAR") {
          cout << it.first << endl;
        }
      }

    } else {

      for (auto it : Players) {
        if (it.second == "PAR") {
          cout << it.first << endl;
        }
      }
    }
    Players.clear();
  }
  return 0;
}
