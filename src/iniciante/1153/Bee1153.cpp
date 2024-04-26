#include <bits/stdc++.h>
int main(){

    float n;
    int soma = 1;
    scanf("%f",&n);
    for (int i = 1; i < n; i++)
    {
        soma =soma + soma * i;
    }
    printf("%d",soma);
        




    return 0;
}