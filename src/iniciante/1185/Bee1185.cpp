#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]) {
  vector<vector<double>> matrix(12, vector<double>(12));
  double Result = 0.0;
  int counter = 0;
  char Sum;
  cin >> Sum;
  for (int column = 0; column < 12; column++) {
    for (int row = 0; row < 12; row++) {
      cin >> matrix[column][row];
    }
  }
  for (int columnForCount = 0; columnForCount < 11; columnForCount++) {
    for (int rowForCount = 10 - counter; rowForCount >= 0; rowForCount--) {
      Result += matrix[columnForCount][rowForCount];
    }
    counter++;
  }
  if (Sum == 'S') {
    printf("%.1f\n", Result);
  } else {
    printf("%.1f\n", Result / 66.0);
  }

  return 0;
}
