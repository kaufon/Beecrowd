#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  vector<int> Worlds;
  int result = 0;
  int n;
  while (cin >> n) {
    while (n--) {
      int celeste;
      cin >> celeste;
      Worlds.push_back(celeste);
    }
    int biggest = *max_element(Worlds.begin(), Worlds.end());
    Worlds.erase(remove(Worlds.begin(), Worlds.end(), biggest), Worlds.end());
    for (const auto &world : Worlds) {
      if (world >= biggest * 0.01) {
        result++;
      }
    }
    if (result <= 2) {
      cout << "Problema de 2 Corpos" << endl;

    } else {
      cout << "Problema de N Corpos" << endl;
    }
  }
  return 0;
}
