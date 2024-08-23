#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {

  vector<vector<double>> matrix(12, vector<double>(12));
  double Result = 0.0;
  int counter = 11;
  char Sum;
  cin >> Sum;
  for (int column = 0; column < 12; column++) {
    for (int row = 0; row < 12; row++) {
      cin >> matrix[column][row];
    }
  }

  for (int columnForCount = 1; columnForCount <= 11; columnForCount++) {
    for (int rowForCount = 11; rowForCount >= counter; rowForCount--) {
      Result += matrix[columnForCount][rowForCount];
    }
    counter--;
  }

  if (Sum == 'S') {
    printf("%.1f\n", Result);
  } else {
    printf("%.1f\n", Result / 66.0);
  }

  return 0;
}
