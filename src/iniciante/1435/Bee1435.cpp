#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[]) {
  int n = 1;
  int x = 0;
  while (cin >> n && n != 0) {
    int rows = n, cols = n;
    vector<vector<int>> matrix(rows+1, vector<int>(cols+1));
    for (int rowForCount = 1; rowForCount <= rows; rowForCount++) {
      for (int columnForCount = 1; columnForCount <= cols; columnForCount++) {
        x = rowForCount;
        if (columnForCount < x) {
          x = columnForCount;
        }
        if (n - rowForCount + 1 < x) {
          x = n - rowForCount + 1;
          
        }
        if (n - columnForCount +1 < x) {
          x = n - columnForCount + 1;
          
        }
        matrix[rowForCount][columnForCount] = x;

        if (columnForCount == 0) {
          cout << setw(3) << matrix[rowForCount][columnForCount];
        } else {
          cout << " " << setw(3) << matrix[rowForCount][columnForCount];
        }
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
