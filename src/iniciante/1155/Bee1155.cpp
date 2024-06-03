#include <bits/stdc++.h>

using namespace std; 
  
int main(){
  float S = 1;
  for (float i = 2; i < 101; i++) {
      S += 1/i;
  }
  printf("%.2f\n",S);


  return 0;
}
