#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    float X,nota= 0;
    int escolha = 1;
    while (escolha != 2)
    {
        nota = 0;
        for (int i = 0; i < 2; i++)
        {
        while (cin >> X)
        {
            if (X > 0 && X <= 10)
            {
                nota += X;
                break;
            }
            else
            {
                cout << "nota invalida" <<endl;
            }
            
        }
        }
        printf("media = %.2f\n",nota/2);
        
        
        while (true)
        {
            
        
        cout <<"novo calculo (1-sim 2-nao)"<<endl;
        cin >> escolha;
        if (escolha == 1 || escolha == 2)
        {
            break;
        }
        
    
        }
        
    }
    return 0;
}