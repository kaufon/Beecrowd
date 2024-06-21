#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int Fibonacci(unsigned long long int x) {
    if (x == 0) {
        return 0;
    }
    unsigned long long int a = 0;
    unsigned long long int b = 1;
    unsigned long long int middleman = 0;
    for (int i = 0; i < x-1; i++) {
        middleman = a+b;
        a = b;
        b = middleman;
    }
    return b;
};

int main(int argc, char *argv[]) {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        unsigned long long number_of_terms;
        cin >> number_of_terms;
        cout << "Fib("<<number_of_terms<<")" <<" = "<<Fibonacci(number_of_terms) <<endl;
    }
    return 0;
}

