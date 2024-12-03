
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
  int n, result = 0;
  cin >> n;
  for (int i = 1; i != n + 1; i++) {
    string number = to_string(i);
    if (number.find("3") == string::npos) {
      result++;
    }
  }
  cout << result << endl;
}
