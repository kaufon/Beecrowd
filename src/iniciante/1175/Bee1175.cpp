#include <bits/stdc++.h>
#include <cstdio>
#include <utility>

using namespace std;

int main (int argc, char *argv[]) {
  vector<int>Numbers;
  for (int i = 0; i < 20; i++) {
    int N;
    cin >> N;
    Numbers.push_back(N);
  }
  
  for (int i = 0; i < (Numbers.size()/2); i++) {
    swap(Numbers[i],Numbers[(Numbers.size()/2) - i - 1]);

    
  }

  for (int i = 0; i < Numbers.size(); i++) {
    printf("N[%d] = %d\n",i,Numbers[i]);
    
  }
  return 0;
}
