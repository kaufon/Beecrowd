#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[]) {
  int Complaints = 0;
  while (cin >> Complaints) {
    int* ComplatinPointer = &Complaints;
    if (*ComplatinPointer <= 0) {
      cout << "vai ter copa!" << endl;
    }
    else {
    cout << "vai ter duas!" <<endl;
    }
  }
  return 0;
}
