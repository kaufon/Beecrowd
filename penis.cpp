#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int x,y;
    while (true)
    {
        scanf("%d",&x);
        scanf("%d",&y);
        if (x == 0 or y == 0)
        {
            break;
        }
        if (x > 0 and y > 0)
        {
            cout << "primeiro" << endl;
        }
        else if (x < 0 and y > 0)
        {
            cout << "segundo" << endl;
        }
        else if (x < 0 and y < 0)
        {
            cout <<"terceiro"<< endl;
        }
        else
        {
            cout << "quarto" << endl;
        }
        
        
        
    }
    
}