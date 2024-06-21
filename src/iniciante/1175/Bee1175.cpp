#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[]) {
  vector<int>Numbers;
  for (int i = 0; i < 20; i++) {
    int N;
    cin >> N;
    Numbers.push_back(N);
  }
  
  reverse(Numbers.begin(),Numbers.end());
  for (int i = 0; i < Numbers.size(); i++) {
    printf("N[%d] = %d\n",i,Numbers[i]);
    
  }
  return 0;
}
