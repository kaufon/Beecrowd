#include <bits/stdc++.h>
using namespace std;
int main(){

    int N;
    int x = 0, y = 0;
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d",&x,&y);
        int soma = 0,contador = 0;
        for (int i = x;contador < y;i++)
        {
            if (i % 2 != 0)
            {
                soma = soma + i;
                contador++;
                
            }
            
        }
        printf("%d\n",soma);
        
    }
    


    return 0;
}