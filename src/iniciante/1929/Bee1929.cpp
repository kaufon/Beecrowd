#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
bool Check_Triangule(int a, int b, int c) {
  if (a + b > c && a + c > b && c + b > a) {
    return true;
  }
  return false;
};
int main(int argc, char *argv[]) {
  int l1, l2, l3, l4;
  cin >> l1 >> l2 >> l3 >> l4;
  vector<int> list = {l1, l2, l3, l4};
  int n = list.size();
  for (int i = 0; i != n; i++) {
    for (int j = i + 1; j != n; j++) {
      for (int k = j + 1; k != n; k++) {
        if (Check_Triangule(list[i], list[j], list[k])) {
          cout << "S" << endl;
          return 0;
        }
      }
    }
  }
  cout << "N" <<endl;
  return 0;
}
