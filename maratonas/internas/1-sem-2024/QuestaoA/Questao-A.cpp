#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  while (n--) {
    int result = 0;
    string cpf;
    cin >> cpf;
    int multiplier = 2;
    for (int i = cpf.length() - 1; i >= 0; i--) {
      int number = cpf[i] - '0';
      result += number * multiplier;
      multiplier++;
    }
    int verifierNumber = result % 11;
  }
  return 0;
}
