#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, z,contador = 0,sum = 0;
    while (true)
    {
        scanf("%d %d",&x,&z);
        while (x > z)
        {
            scanf("%d",&z);
        }
        break;
    }
    for (int i = x;;i++)
    {
        sum +=i;
        contador++;
        if (sum >=z)
        {
            break;
        }
        

        
    }
    printf("%d\n",contador);
    
    return 0;
}