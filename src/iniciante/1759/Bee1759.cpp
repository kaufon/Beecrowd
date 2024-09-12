#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int *numbersOfHo = static_cast<int *>(malloc(sizeof(int)));
  int numbersOfHoMemory;
  if (numbersOfHo == nullptr) {
    cerr << "Memory alloc failed" << endl;
    return -1;
  }
  cin >> numbersOfHoMemory;
  *numbersOfHo = numbersOfHoMemory;
  for (int i = 0; i < numbersOfHoMemory; i++) {
    if (i + 1 == numbersOfHoMemory) {
      cout << "Ho!" << endl;
    } else {
      cout << "Ho ";
    }
  }
  free(numbersOfHo);
  return 0;
}
