
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]) {
  float volume, diamater;
  float pi = 3.14;
  while (cin >> volume >> diamater) {
    float radius = diamater / 2;
    float height = volume/(pi * pow(radius,2));
    float area = pi * pow(radius,2);
    printf("ALTURA = %.2f\n",height);
    printf("AREA = %.2f\n",area);
  }
  return 0;
}
