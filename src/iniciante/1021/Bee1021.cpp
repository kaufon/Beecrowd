#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    double moedas = 0;
    scanf("%lf",&moedas);
    n = int(moedas);
    moedas = moedas * 100;
    int qntmodeas = moedas;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n/100);
    n = n%100;
    printf("%d nota(s) de R$ 50.00\n",n/50);
    n = n % 50;
    printf("%d nota(s) de R$ 20.00\n",n/20);
    n = n % 20;
    printf("%d nota(s) de R$ 10.00\n",n/10);
    n = n %10;
    printf("%d nota(s) de R$ 5.00\n",n/5);
    n = n % 5;
    printf("%d nota(s) de R$ 2.00\n",n/2);
    n = n % 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",n);
    qntmodeas = qntmodeas % 100;
    printf("%d moeda(s) de R$ 0.50\n",(qntmodeas)/50);
    qntmodeas = qntmodeas % 50;
    printf("%d moeda(s) de R$ 0.25\n",(qntmodeas/25));
    qntmodeas = qntmodeas % 25;
    printf("%d moeda(s) de R$ 0.10\n",(qntmodeas/ 10));
    qntmodeas = qntmodeas % 10;
    printf("%d moeda(s) de R$ 0.05\n",(qntmodeas/5));
    qntmodeas = qntmodeas % 5;
    printf("%d moeda(s) de R$ 0.01\n",(qntmodeas/1));


    return 0;
    
}