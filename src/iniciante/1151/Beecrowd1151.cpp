#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  int t1 = 0,t2 = 1;
  cin >> N;
  cout << t1 << " " << t2 << " ";
  for (int i = 2; i != N; i++){
      int temp = t1;
      t1 = t2;
      t2 = temp + t2;
      if (i == N-1) {
      cout << t2;
      }
      else {
      cout << t2 << " ";
      }
      
  }



  return 0;
}
