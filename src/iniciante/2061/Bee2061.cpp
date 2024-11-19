#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int windows, actions;
  cin >> windows >> actions;
  while (actions--) {
    string action;
    cin >> action;
    if (action  == "fechou") {
     windows++; 
    }else{
      windows--;
    }
  }
  cout << windows <<endl;
  return 0;
}
