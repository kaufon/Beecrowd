#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int SideA = 0, SideB = 0, liberatedPercent = 0;
  while (cin >> SideA && SideA != 0 && cin >> SideB &&
         cin >> liberatedPercent) {
    int squareMeters = SideA * SideB;
    int totalSquareMetersNeeded = (squareMeters*100)/liberatedPercent;
    cout << int(sqrt(totalSquareMetersNeeded)) <<endl;
  }
  return 0;
}
