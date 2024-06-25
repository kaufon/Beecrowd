#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main (int argc, char *argv[]) {
  double Year1,Year2;
  cin >> Year1 >> Year2;
  double Flutuation = 0;
  Flutuation = (100 + (100* Year1/100 ));
  Flutuation += (Flutuation * Year2/100 );
  printf("%.6f\n",Flutuation-100);
  return 0;
}
