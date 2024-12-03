
#include <bits/stdc++.h>
using namespace std;
vector<int> valores, pesos;
pair<int, int> mochila(int W, vector<int> &pesos, vector<int> &valores, int n) {
  if (n == 0 || W == 0) {
    return {0, W};
  }
  if (pesos[n - 1] > W) {
    return mochila(W, pesos, valores, n - 1);
  }
  auto exculde = mochila(W, pesos, valores, n - 1);
  auto include = mochila(W - pesos[n - 1], pesos, valores, n - 1);
  include.first += valores[n - 1];
  if (include.first > exculde.first) {
    return include;

  } else {
    return exculde;
  }
}
int main(int argc, char *argv[]) {
  int restricao, n;
  vector<int> pesos, valores;
  cin >> restricao >> n;
  while (n--) {
    int cost, value;
    cin >> cost >> value;
    pesos.push_back(cost);
    valores.push_back(value);
  }
  auto result = mochila(restricao, pesos, valores, valores.size());
  if (result.first == 0) {
    cout << "NO FUNDS" << endl;
  } else {
    cout << result.first << " " << result.second << endl;
  }
  return 0;
}
