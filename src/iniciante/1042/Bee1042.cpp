#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    vector<int> Sorteado;
    vector<int> NoSort;
    Sorteado.insert(Sorteado.end(),{x,y,z});

    NoSort.insert(NoSort.end(),{x,y,z});
    
    sort(Sorteado.begin(),Sorteado.end());
    
    for (int i = 0; i < size(Sorteado); i++)
    {
        cout << Sorteado[i] <<endl;
    }
    cout << endl;
    for (int i = 0; i < size(NoSort); i++)
    {
        cout << NoSort[i] << endl;
    }
    
    



    return 0;
}