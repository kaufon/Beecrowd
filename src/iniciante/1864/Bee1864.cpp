#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  vector<string> letters = {"L", "I", "F", "E", " ", "I", "S", " ", "N",
                            "O", "T", " ", "A", " ", "P", "R", "O", "B",
                            "L", "E", "M", " ", "T", "O", " ", "B", "E",
                            " ", "S", "O", "L", "V", "E", "D"};
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cout << letters[i];
  }
  cout <<endl;
  return 0;
}
