#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    vector<int> N;
    scanf("%d",&t);
    do{
        for (int i = 0; i < t; i++)
        {
            N.push_back(i);
            if(size(N) == 1000){
                break;
            }
        }
    }while(size(N) < 1000);
    for (int i = 0; i < size(N); i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
    



    return 0;
}