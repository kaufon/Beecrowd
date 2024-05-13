#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    float salario,corte = 0;
    scanf("%f",&salario);
    if (salario <= 2000.00)
    {
        cout << "Isento" << endl;
    }
    else if (salario > 3000.01 && salario < 4500.00)
    {
        corte = (salario -3000) * 0.18;
        printf("R$ %.2f\n",1000*0.08 + corte);
    }
    else if (salario > 2000.01 && salario < 3000.00)
    {
        corte = (salario -2000) * 0.08;
        printf("R$ %.2f\n",corte);
    }
    else if (salario >= 4500.00)
    {
        corte = (salario -4500) * 0.28;
        printf("R$ %.2f\n",1000*0.08 +1500*0.18+ corte);
    }
    
    
 
    return 0;
}