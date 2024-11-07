#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  map<int,double>List;
  List[1001] = 1.50;
  List[1002] = 2.50;
  List[1003] = 3.50;
  List[1004] = 4.50;
  List[1005] = 5.50;
  int n;
  cin >> n;
  double bill;
  for (int i = 0 ; i != n ; i++) {
    int code,quantity;
    cin >> code >> quantity;
    bill += List[code] * quantity;
  }
  printf("%.2lf\n",bill);
  return 0;
}
