#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]) {
  vector<vector<int>> matrix(12, vector<int>(12));
  int Line ;
  float Result = 0.0f;
  cin >> Line;
  bool Soma;
  char Sum;
  cin >> Sum;

  if (Sum == 'S') {
    Soma = true;
  }
  for (int column = 0; column < 12; column++) {
    for (int row = 0; row < 12; row++) {
      scanf("%d",&matrix[column][row]);
    }
  }
  for (int column = 0; column < 12;column++) {
      Result += matrix[Line][column];
  }
  if (Soma) {
    printf("%1.f\n",Result);    
  }
  else {
    printf("%1.f\n",Result/12);
  }

  return 0;
  }
