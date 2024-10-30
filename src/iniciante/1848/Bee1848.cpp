#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
  string ans;
  int limit = 0;
  int result = 0;
  int lotery = 0;
  while (limit != 3) {
    getline(cin, ans);
    char arr[ans.length()];
    strcpy(arr, ans.c_str());
    for (int i = 0; i < ans.length(); i++) {
      if (arr[i] == '*') {
        if (i == 0) {
          lotery += 100;
        }
        if (i == 1) {
          lotery += 10;
        }
        if (i == 2) {
          lotery += 1;
        }
      }
    }
    result += stoi(to_string(lotery), nullptr, 2);
    lotery = 0;

    if (ans == "caw caw") {
      cout <<result <<endl;
      limit++;
      result = 0;
    }
  }
  return 0;
}
