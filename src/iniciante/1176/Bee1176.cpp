#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int N, F;
  long long int FibbonaciSequence[61];
  cin >> N;
  FibbonaciSequence[0] = 0;
  FibbonaciSequence[1] = 1;
  for (int Terms = 2; Terms <= 60; Terms++) {
    FibbonaciSequence[Terms] =
        FibbonaciSequence[Terms - 2] + FibbonaciSequence[Terms - 1];
  }
  for (int i = 0; i < N; i++) {

    cin >> F;
    printf("Fib(%d) = %lld\n", F, FibbonaciSequence[F]);
  }
  return 0;
}
