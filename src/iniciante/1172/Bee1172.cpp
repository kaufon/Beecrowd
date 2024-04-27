#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> X;
    for (int i = 0; i < 10; i++)
    {
        int x = 0;
        scanf("%d",&x);
        if(x <= 0){
            x = 1;
        }
        X.push_back(x);
    }
    for (int i = 0; i < size(X); i++)
    {
        printf("X[%d] = %d\n",i,X[i]);
    }
    

    return 0;
}