#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    float moedas = 0;
    scanf("%f",&moedas);
    n = int(moedas);
    moedas =moedas - n;
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


    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",n);
    printf("%d moeda(s) de R$ 0.50\n",qntmodeas/50);
    printf("%d moeda(s) de R$ 0.25\n",(qntmodeas % 50)/25);
    printf("%d moeda(s) de R$ 0.10\n",((qntmodeas %50) % 25) / 10);
    printf("%d moeda(s) de R$ 0.05\n",(((qntmodeas %50) %25) &10) /5);
    printf("%d moeda(s) de R$ 0.01\n",((((qntmodeas %50) %25) %10) %5) /1);


    return 0;
    
}