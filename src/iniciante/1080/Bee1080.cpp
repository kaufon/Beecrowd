#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int N;
    vector<int> Numeros;
    for (int i = 0; i < 10; i++)
    {
        cin >> N;
        Numeros.push_back(N);
    }
    int maior = *max_element(Numeros.begin(),Numeros.end());
    int position = distance(Numeros.begin(),max_element(Numeros.begin(),Numeros.end()));
    cout << maior <<endl;
    cout << position <<endl;

 
    return 0;
}