#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  for (int i = 0; i != n; i++) {
    string avenger;
    int strength;
    cin >> avenger >> strength;
    if (avenger == "Thor") {
      cout << "Y";
    }
    else{
      cout << "N";
    }
    cout << endl;
  }
  return 0;
}
