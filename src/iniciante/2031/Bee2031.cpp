#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  while (n--) {
    string player1, player2;
    cin >> player1 >> player2;
    if (player1 == player2) {
      if (player1 == "papel") {
        cout << "Ambos venceram" << endl;
      } else if (player1 == "ataque") {
        cout << "Aniquilacao mutua" << endl;
      } else {
        cout << "Sem ganhador" << endl;
      }
    }else if(player1 == "ataque"){
      cout << "Jogador 1 venceu" <<endl;
    }else if(player1 == "pedra" && player2 == "papel"){
      cout << "Jogador 1 venceu" <<endl;
    }else{
      cout << "Jogador 2 venceu" <<endl;
    }
  }
  return 0;
}
