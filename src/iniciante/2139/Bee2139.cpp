#include <bits/stdc++.h>
#include <cmath>
using namespace std;
struct Date {
  int month, day;
};
const int monthDays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int getDifference(Date init, Date dt2 = {12, 25}) {
  long int n1 = init.day + 365;
  for (int i = 0; i < init.month - 1; i++) {
    n1 += monthDays[i];
  }
  long int n2 = dt2.day + 365;
  for (int i = 0; i < dt2.month - 1; i++) {
    n2 += monthDays[i];
  }
  return (n2 - n1);
}
int main(int argc, char *argv[]) {
  int month, day;
  while (cin >> month >> day) {
     int result =  getDifference(Date{month, day});
    if (result == 0) {
      cout << "E natal!" <<endl;
      
    }else if( result < 0 ){
      cout << "Ja passou!" <<endl;
    }else if( result == 1){
      cout << "E vespera de natal!" << endl;
    }else{
      printf("Faltam %d dias para o natal!\n",result);
    }
  }
  return 0;
}
