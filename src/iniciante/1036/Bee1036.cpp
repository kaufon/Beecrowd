#include <bits/stdc++.h>

using namespace std;

int main(){
    double a = 0,b = 0 , c = 0, ans1 = 0 , ans2 = 0;
    scanf("%lf %lf %lf",&a,&b,&c);
    double delta = pow(b,2) - 4 * (a) * (c);
    ans1 = (-b + sqrt(delta)) / (2*a);
    ans2 = (-b - sqrt(delta)) / (2*a);
    if (a <= 0 || b <= 0 || c <= 0 || isnan(ans1) == true || isnan(ans2) == true)
    {
        cout << "Impossivel calcular" <<endl;
    }
    else
    {
        
        printf("R1 = %.5lf\nR2 = %.5lf\n",ans1,ans2);
    }
    


    return 0;
}