#include <bits/stdc++.h>

using namespace std;

int main(){
    int inicio,fim,contador = 0;
    scanf("%d %d",&inicio,&fim);
    for (int i = inicio; i != fim; i++)
    {
    
       if (i == 24)
       {
        i = 0;
        if (i == fim)
        {
            break;
        }
        
       }
       contador++;
       
    }
    if (inicio == fim)
    {
        contador = 24;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n",contador);
    



    return 0;
}