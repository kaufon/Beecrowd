#include <bits/stdc++.h>

using namespace std;
int main(){
 int FinalNumber = 0;
 int N = 0;
 while (cin >> N && N != 0) {
    if (N % 2 != 0) {
      N++;
      for (int i = 0; i < 5 ; i++) {
        FinalNumber += N;
        N += 2;
      }
    }
    else {
      for (int i = 0; i < 5; i++) {
        FinalNumber += N;
        N += 2;
      }
    }
    printf("%d\n",FinalNumber);
    FinalNumber = 0;


    }
   


  return 0;
}
