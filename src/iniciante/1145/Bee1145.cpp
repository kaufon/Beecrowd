#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    for (int i = 1; i <= y; i++)
    {
        cout << i;
        if (i % x == 0)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
        
        
    }
    
    
 
    return 0;
}