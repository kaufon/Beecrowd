#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    vector<int> N;
    scanf("%d",&x);
    N.push_back(x);
    for(int i = 1;i < 10;i++){
        x*=2;
        N.push_back(x);
        



    }
    for (int i = 0; i < size(N); i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
    



    return 0;
}