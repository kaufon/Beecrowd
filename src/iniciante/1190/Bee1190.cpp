#include <bits/stdc++.h>
using namespace std;

int main(){
    char Escolha;
    int escolha;
    double rows = 12,cols = 12;
    vector<vector<double>> matrix(rows,vector<double>(cols));

    cin >>Escolha;
    if (Escolha == 'S')
    {
        escolha = 0;
    }
    else{
        escolha = 1;
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%lf",&matrix[i][j]);
        }
        
    }
    float sum = 0;
    int cont = 0;
    for (int j = 1; j <= 10; ++j) {
        sum += matrix[j][11];
        cont++;
    }

    for (int j = 2; j <= 9; ++j) {
        sum += matrix[j][10];
        cont++;
    }
     for (int j = 3; j <= 8; ++j) {
        sum += matrix[j][9];
        cont++;
    }
    for (int j = 4; j <= 7; ++j) {
        sum += matrix[j][8];
        cont++;
    }

    for (int j = 5; j <=6 ; ++j)
    {
        sum += matrix[j][7];
        cont++;
    }
    
    
    switch (escolha)
    {
    case 0:
        printf("%.1f\n",sum);
        break;
    
    case 1:
        printf("%.1f\n",sum/cont);
        break;
    }
    return 0;
}