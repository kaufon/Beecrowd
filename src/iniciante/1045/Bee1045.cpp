#include <bits/stdc++.h>

using namespace std;

int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    vector<float> numeros = {a,b,c};
    sort(numeros.begin(),numeros.end());
    a = numeros[2];
    b = numeros[1];
    c = numeros[0];
    if ((a >= b+c) == true)
    {
        cout << "NAO FORMA TRIANGULO" <<endl;
    }
    else{
    
    if (pow(a,2) == (pow(b,2) + pow(c,2)))
    {
        cout << "TRIANGULO RETANGULO"<<endl;
    }
    if (pow(a,2) > (pow(b,2)+pow(c,2)))
    {
        cout << "TRIANGULO OBTUSANGULO"<<endl;
    }
    if (pow(a,2) < (pow(b,2)+pow(c,2)))
    {
         cout << "TRIANGULO ACUTANGULO"<<endl;
    }
    if (a == b && b == c)
    {
        cout << "TRIANGULO EQUILATERO" <<endl;
    }
    if (a == b && b != c|| b == c && c != a || a==c && c != b)
    {
        cout << "TRIANGULO ISOSCELES" <<endl;
    }
    }
    
    
    
    
    



    return 0;
}