
#include <bits/stdc++.h>
#include <cstdio>

using  namespace std;

int main (int argc, char *argv[]) {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
      int PopulationA,PopulationB,Years = 0;
      float PopulationAGrowth,PopulationBGrowth;
      cin >> PopulationA >> PopulationB >> PopulationAGrowth >> PopulationBGrowth;
      while (PopulationA <= PopulationB) {
        PopulationA += (PopulationA * PopulationAGrowth/100);
        PopulationB +=(PopulationB * PopulationBGrowth/100);
        Years++;
        if (Years > 100) {
          break;
        
        }
    }
    if (Years > 100) {
      printf("Mais de 1 seculo.\n");
    
      }
    else{
    printf("%d anos.\n",Years);
    
    }
  }
  return 0;
}

