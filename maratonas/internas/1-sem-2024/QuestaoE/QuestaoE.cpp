#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int x,y,z;
  while(cin >> x >> y >> z){
    int biggest,tiniest;
    tiniest = min({x,y,z});
    biggest = max({x,y,z});
    if(tiniest < biggest * 0.01){
      cout << "Problema de 2 Corpos" << endl;
    }else{
      cout << "Problema de 3 Corpos" <<endl;
    }
  }
  return 0;
}
