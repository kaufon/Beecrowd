#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;
    scanf("%d",&n);
    int anos = abs(n/365);
    int meses =  (n%365)/30;
    int dias = n - anos * 365 - meses * 30;
    printf("%d ano(s)\n",anos);
    printf("%d mes(es)\n",meses);
    printf("%d dia(s)\n",dias);


    return 0;
}