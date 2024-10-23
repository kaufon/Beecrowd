#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int numberOfInputs = 0;
  int R1 = 0, R2 = 0, tiniestRadiusPossible = 0;
  int *R1Pointer = &R1;
  int *R2Pointer = &R2;
  int *tiniestRadiusPossiblePointer = &tiniestRadiusPossible;

  cin >> numberOfInputs;
  for (int i = 0; i < numberOfInputs; i++) {
    cin >> *R1Pointer >> *R2Pointer;
    *tiniestRadiusPossiblePointer = *R1Pointer + *R2Pointer;
    cout << *tiniestRadiusPossiblePointer <<endl;
  }
  return 0;
}
