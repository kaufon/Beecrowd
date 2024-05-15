#include <bits/stdc++.h>

using namespace std;

int main(){
    float N,media = 0;
    int tamanho = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f",&N);
        if (N > 0)
        {
            media += N;
            tamanho++;
        }
        
    }
    

    printf("%d valores positivos\n%.1f\n",tamanho,media/tamanho);
    



    return 0;
}