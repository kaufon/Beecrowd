
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  long double x;
  cin >> x;
  stringstream ss;
  ss << scientific << setprecision(4) << x;
  string stringStr = ss.str();
  for (char &c : stringStr) {
    c = toupper(c);
  }
  if (!signbit(x)) {
    cout << "+" << stringStr << endl;
  } else {

    cout << stringStr << endl;
  }
  return 0;
}
