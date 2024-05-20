#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int M,N,valor = 0;
    while (cin>>M>>N)
    {
        valor = 0;
        if (M <= 0 || N <= 0)
        {
            break;
        }
        if (M > N)
        {
            swap(N,M);
        }

        for (int i = M; i <= N; i++)
        {
           valor += i;  
           cout << i <<" ";
        }
        printf("Sum=%d\n",valor);
        
    }
    
    
 
    return 0;
}