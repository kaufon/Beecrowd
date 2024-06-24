#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    vector<double> N(100); // Use a vector instead of an array
    double Number;
    cin >> Number;
    N[0] = Number;

    for (size_t i = 1; i < N.size(); ++i) {
        N[i] = N[i-1] / 2.0f; // Use float literal for better precision
    }

    for (int i = 0; i < N.size(); ++i) {
        printf("N[%d] = %.4f\n",i,N[i]);
    }

    return 0;
}
