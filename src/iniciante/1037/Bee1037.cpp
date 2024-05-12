#include <bits/stdc++.h>

using namespace std;

int main(){
    double N = 0;
    scanf("%lf",&N);
    if (0 <= N && N <= 25.00000 )
    {
        cout << "Intervalo [0,25]" << endl;;
    }
    else if (25 < N && N <= 50.0000 )
    {
        cout << "Intervalo (25,50]" << endl;;
    }
    else if (50 < N && N <= 75.0000 )
    {
        cout << "Intervalo (50,75]" << endl;;
    }
    else if (75 < N && N <= 100.0000 )
    {
        cout << "Intervalo (75,100]" << endl;;
    }
    else
    {
        cout << "Fora de intervalo" << endl;
    }
    
    
    


    return 0;
}