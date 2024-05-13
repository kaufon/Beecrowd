#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    float salario,reajuste = 0,porcentagem = 0;
    scanf("%f",&salario);
    if (salario <= 400.00)
    {   reajuste = salario * 0.15;
        salario = salario + (salario * 0.15);
        
        porcentagem = 15;
    }
    else if (salario <= 800 && salario > 400.00)
    {
        reajuste = salario * 0.12;
        salario = salario + (salario * 0.12);
        
        porcentagem = 12;
    }
    else if (salario <= 1200 && salario > 800.00)
    {
        reajuste = salario * 0.10;
        salario = salario + (salario * 0.10);
        
        porcentagem = 10;
    }
    else if (salario <= 2000 && salario > 1200.00)
    {
        reajuste = salario * 0.07;
        salario = salario + (salario * 0.07);
       

        porcentagem = 7;
    }
    else
    {
        reajuste = salario * 0.04;
        salario = salario + (salario * 0.04);
        
        porcentagem = 4;
    }
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %0.f %%\n",salario,reajuste,porcentagem);
    
    
    
    
 
    return 0;
}