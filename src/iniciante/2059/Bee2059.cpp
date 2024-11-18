#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int Player1Even, player1, player2, result, player1Stole, player2Called;
  bool isPlayer1Even = false, hasPlayer1Stolen = false,
       hasPlayer2Called = false;
  cin >> Player1Even >> player1 >> player2 >> player1Stole >> player2Called;
  result = player1 + player2;
  if (Player1Even == 1) {
    isPlayer1Even = true;
  }
  if (player1Stole == 1) {
    hasPlayer1Stolen = true;
  }
  if (player2Called == 1) {
    hasPlayer2Called = true;
  }
  if (hasPlayer1Stolen && !hasPlayer2Called) {
    cout << "Jogador 1 ganha!" <<endl;
    return 0 ;
  }else if (hasPlayer1Stolen && hasPlayer2Called){
    cout << "Jogador 2 ganha!" <<endl;
    return 0;
  }
  if (isPlayer1Even && result % 2 == 0 || !isPlayer1Even && result % 2 != 0 ) {
    cout << "Jogador 1 ganha!" << endl;
  }else{
    cout << "Jogador 2 ganha!"<<endl;
  }
  return 0;
}
