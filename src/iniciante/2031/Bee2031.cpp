
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  map<string, vector<string>> Game = {
      {"pedra", {"ataque"}}, {"papel", {"pedra,ataque"}}, {"ataque", {}}};
  int n;
  cin >> n;
  while (n--) {
    string player1, player2;
    cin >> player1 >> player2;
    if (player1 == player2) {
      if (player1 == "papel") {
        cout << "Ambos Venceram" << endl;

      } else if (player1 == "ataque") {
        cout << "Aniquilacao mutua" << endl;
      }
      else {
        cout << "Sem ganhador" << endl;
      }
    } else if ((player1 == "ataque" ||
                (find(Game[player1].begin(), Game[player1].end(), player2) ==
                     Game[player1].end() &&
                 player2 != "ataque"))) {
      cout << "Jogador 1 venceu" << endl;
    } else {
      cout << "Jogador 2 venceu" << endl;
    }
  }

  return 0;
}
