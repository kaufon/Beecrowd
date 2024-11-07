#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  vector<pair<int, double>> Grades;
  for (int i = 0; i != n; i++) {
    int studentCode;
    double studentGrade;
    cin >> studentCode >> studentGrade;
    Grades.push_back({studentCode, studentGrade});
  }
  pair<int, double> biggestStudent = Grades[0];
  for (const auto &[code, grade] : Grades) {
    if (grade > biggestStudent.second) {
      biggestStudent = {code, grade};
    }
  }
  if (biggestStudent.second >= 8) {
    cout << biggestStudent.first << endl;
  }else{
    cout << "Minimum note not reached" <<endl;
  }

  return 0;
}
