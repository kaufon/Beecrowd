
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {

  vector<vector<double>> matrix(12, vector<double>(12));
  double Result = 0.0;
  int counter = 1;
  int anotherCounter = 1;
  char Sum;
  int numForDivision = 0;
  cin >> Sum;
  for (int column = 0; column < 12; column++) {
    for (int row = 0; row < 12; row++) {
      cin >> matrix[column][row];
    }
  }

  for (int columnForCount = 1; columnForCount <= 5; columnForCount++) {
    for (int rowForCount = 0; rowForCount < counter; rowForCount++) {
      numForDivision++;
      Result += matrix[columnForCount][rowForCount
        ];
    }
    counter++;
  }

  for (int columnForCount = 10; columnForCount >= 6; columnForCount--) {
    for (int rowForCount = 0; rowForCount < anotherCounter; rowForCount++) {
      numForDivision++;
        Result += matrix[columnForCount][rowForCount];
    }
    anotherCounter++;
  }

  if (Sum == 'S') {
    printf("%.1f\n", Result);
  
  }else if(Sum == 'M'){
    printf("%.1f\n", Result / 30.0);
  }

  return 0;
}
