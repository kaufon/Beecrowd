#include <bits/stdc++.h>

using namespace std;

int main(){
  int inicio,fim,iniciominuts,fimminutos,contador = 0,minutos = 0,contadorminuts = 0;
    scanf("%d %d %d %d",&inicio,&iniciominuts,&fim,&fimminutos);
     if (inicio == fim)
       {
        minutos = 24*60;
       }
    for (int i = inicio; i != fim; i++)
    {
       if (fim == (inicio + 1))
       {
        break;
       }
        

       if (i == 24)
       {
        i = 0;
        if (i == fim)
        {
            break;
        }
        
       }
       minutos += 1*60;
       
    }
    
    
    for (int i = iniciominuts; i != fimminutos; i++)
    {
        if (i == 60)
        {
            i = 0;
            if (i == fim)
            {
                break;
            }
        
        }
        minutos += 1;
    }
    contador = floor(minutos/60);
    contadorminuts = minutos % 60;
    
    
    
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",contador,contadorminuts); 
    








    return 0;
}