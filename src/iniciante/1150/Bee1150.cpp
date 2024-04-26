#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, z,sum = 1;
    while (true)
    {
        scanf("%d %d",&x,&z);
        while (x > z)
        {
            scanf("%d",&z);
        }
        break;
    }
    for (int i = x;i <= z;i += i + sum)
    {
        i += x+ sum;
        ++sum;
        

        
    }
    printf("%d\n",sum);    
    return 0;
}
/*this fucking piece of shit took me 3 hours bcus of line 11*/