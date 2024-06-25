
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]) {
  vector<vector<double>> matrix(12, vector<double>(12));
  int Line;
  double Result = 0.0;
  char Sum;
  cin >> Line;
  cin >> Sum;

  for (int column = 0; column < 12; column++) {
    for (int row = 0; row < 12; row++) {
      cin >> matrix[column][row];
      if (row == Line) {
        Result += matrix[column][row];
      }
    }
  }
  if (Sum == 'S') {
    printf("%.1f\n", Result);
  } else {
    printf("%.1f\n", Result / 12.0);
  }

  return 0;
}
