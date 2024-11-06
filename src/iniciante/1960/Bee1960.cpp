#include <bits/stdc++.h>
using namespace std;
void decimalToRoman(int n) {
  vector<pair<int, string>> roman = {
      {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
      {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
      {5, "V"},    {4, "IV"},   {1, "I"}};

  string result = "";
  for (const auto &[value, numeral] : roman) {
    while (n >= value) {
      result += numeral;
      n -= value;
    }
  }
  cout << result << endl;
}

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  decimalToRoman(n);
  return 0;
}
