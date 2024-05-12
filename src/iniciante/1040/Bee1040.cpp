#include <bits/stdc++.h>

using namespace std;

int main(){
    float n1,n2,n3,n4,exame,media = 0;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    media = (n1*2 + n2*3 + n3*4 + n4*1) / 10;
    printf("Media: %.1f\n",media);

    if (media >= 7.0)
    {
        
        cout << "Aluno aprovado." <<endl;
    }
    else if (media < 5)
    {
        
        cout << "Aluno reprovado." <<endl;
    }
    else
    {
        cout << "Aluno em exame." <<endl;
        scanf("%f",&exame);
        printf("Nota do exame: %.1f\n",exame);
        if ((media + exame) / 2 >= 5 )
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado.." <<endl;
        }
        printf("Media final: %.1f\n",(media + exame) / 2);
    }
    return 0;
}