#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  vector<int> Numbers;
  int N;
  int Index = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int Value;
    cin >> Value;
    Numbers.push_back(Value);
  }
  auto MinValuePointer = min_element(Numbers.begin(), Numbers.end());

  for (int i = 0; i < Numbers.size(); i++) {
    if (Numbers[i] == *MinValuePointer) {
    
      Index = i;
    }
    
  }
  
  printf("Menor valor: %d\nPosicao: %d\n",*MinValuePointer,Index);
  return 0;
}
