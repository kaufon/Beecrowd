#include <bits/stdc++.h>

using namespace std;

int main(){

  float S = 1;
  int flag = 2;
  for (float i = 3; i < 40; i+=2) {
    S += i/flag;
    flag = flag * 2;
  }
  printf("%.2f\n",S);



  return 0;
}

