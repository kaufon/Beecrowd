#include <bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> Idades;
    int idade = 1;
    float media = 0;
    do{       
        scanf("%d",&idade);
        if (idade > 0)
        {
        Idades.push_back(idade); 
        }
        
    }while (idade > 0);

    media = static_cast<float>((accumulate(Idades.begin(),Idades.end(),0)))/size(Idades);

    printf("%.2f\n",media);
    
    return 0;
}