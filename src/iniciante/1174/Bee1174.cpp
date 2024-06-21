#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main (int argc, char *argv[]) {
  vector<float>Numbers;
  for (int i = 0; i < 100; i++) {
    float N;
    cin >> N;
    Numbers.push_back(N);
  }
  for (int i = 0; i < Numbers.size(); i++) {
    if (Numbers[i] <= 10) {
      printf("A[%d] = %.1f\n",i,Numbers[i]); 
    }
  }
  
  return 0;
}
