#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
void calculateYear(int n) {
  int baseYear = 2015;
  int yearPassed = baseYear - n;
  if (yearPassed <= 0) {
    yearPassed -= 1;
  }
  if (signbit(yearPassed)) {
    yearPassed = yearPassed * -1;
    printf("%d A.C.\n", yearPassed);
    return;
  }
  printf("%d D.C.\n", yearPassed);
}
int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  for (int i = 0; i != n; i++) {
    int year;
    cin >> year;
    calculateYear(year);
  }
  return 0;
}
