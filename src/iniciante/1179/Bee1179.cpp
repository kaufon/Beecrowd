#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

void PrintEven(vector<int> &Even) {

  for (int i = 0; i < Even.size(); i++) {
    printf("par[%d] = %d\n", i, Even[i]);
  }
};
void PrintOdd(vector<int> &Odd) {
  for (int i = 0; i < Odd.size(); i++) {
    printf("impar[%d] = %d\n", i, Odd[i]);
  }
}

int main(int argc, char *argv[]) {
  vector<int> Even;
  vector<int> Odd;
  for (int i = 0; i < 15; i++) {
    int N;
    cin >> N;
    if (N % 2 == 0) {
      Even.push_back(N);
      if (Even.size() == 5) {
        PrintEven(Even);
        Even.clear();
      }

    } else {
      Odd.push_back(N);
      if (Odd.size() == 5) {
        PrintOdd(Odd);
        Odd.clear();
      }
    }
  }
  PrintOdd(Odd);
  PrintEven(Even);

  return 0;
}
