#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 1;
  while (cin >> n && n != 0) {
    int rows = n, cols = n;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        matrix[i][j] = abs(j - i) + 1;
        if (j == 0) {
          cout << setw(3) << matrix[i][j];

        } else {
          cout << " " << setw(3) << matrix[i][j];
        }
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}

/*SCARY !!*/
