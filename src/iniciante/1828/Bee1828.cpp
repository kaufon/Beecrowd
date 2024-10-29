#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  vector<vector<int>> graph = {{0, -1, 1, -1, 1},  // Rock
                               {1, 0, -1, 1, -1},  // Papel
                               {-1, 1, 0, 1, -1},  // Lizard
                               {1, -1, -1, 0, 1},  // Spock
                               {-1, 1, 1, -1, 0}}; // Scissor
  string choices[5] = {"pedra", "papel", "lagarto", "Spock", "tesoura"};
  int N;
  cin >> N;
  for (int i = 0; i != N; i++) {
    string Player1, Player2;
    cin >> Player1 >> Player2;
    auto ptr = find(choices, choices + 5, Player1);
    int index1 = ptr - choices;
    ptr = find(choices, choices + 5, Player2);
    int index2 = ptr - choices;
    int result = graph[index1][index2];
    switch (result) {
    case 0:
      cout << "Caso #" << i + 1 << ": De novo!" << endl;
      break;
    case 1:

      cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
      break;

    case -1:

      cout << "Caso #" << i + 1 << ": Raj trapaceou!" << endl;
      break;
    }
  }
  return 0;
}
