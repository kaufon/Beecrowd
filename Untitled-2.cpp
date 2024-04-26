#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Como ler um input de inteiros
    int i, x;
    scanf(" %d %d", &i, &x);

    // Como ler um input de float
    double i, x; // sempre usar double quando for float, a nao ser se o exercicio pedir "use uma precisao fraca"
    scanf(" %f %f", &i, &x);

    // Vao ter coisas que tem mais de uma linha, quebra de linha, etc, que podem dar problemas, ficar atento
    string str;
    getline();
    cin >> str;
    cout << "output: " << str;

    printf("output: %d", i);

    // Voce tem que ler ate o fim do arquivo
    while (cin >> str)
    {
    }

    return 0;
}