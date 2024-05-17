#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int N,Quantidade,coelhos=0,ratos=0,sapos=0,total=0;;
    cin >> N;
    string Tipo;

    for (int i = 0; i < N; i++)
    {
        
        cin >> Quantidade >> Tipo;
        total += Quantidade;
        if (Tipo == "C")
        {
            coelhos += Quantidade;
        }
        else if (Tipo == "R")
        {
            ratos += Quantidade;
        }
        else if (Tipo == "S")
        {
            sapos += Quantidade;
        }
        
    }
    float mediacoelho = 0,mediarato = 0,mediasapo =0;
    mediacoelho = static_cast<float>(coelhos) * 100/ total;
    mediarato = static_cast<float>(ratos) * 100 / total;
    mediasapo = static_cast<float>(sapos) * 100 / total;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",total,coelhos,ratos,sapos);
    printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",mediacoelho,mediarato,mediasapo);
    
    
    return 0;
}