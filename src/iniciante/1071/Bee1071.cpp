#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,contador = 0;
    scanf("%d",&x);
    scanf("%d",&y);
    if (x < 0)
    {
        x = x * -1;
    }
    if (y < 0)
    {
        y = y * -1;
    }
    if (y < x){
        swap(x,y);
        
    }
    for (int i = x; i < y; i++)
    {
        if (i % 2 != 0)
        {
            contador += i;
        }
        
    }
    printf("%d\n",contador);
    


    return 0;
}