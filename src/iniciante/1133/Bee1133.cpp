#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int X,Y;
    cin >> X;
    cin >> Y;
    if (Y < X)
    {
       swap(X,Y);
    }
    for (int i = X+1; i < Y; i++)
    {
        if ((i % 5 == 2) || (i % 5 == 3))
        {
            cout << i <<endl;
        }
        
    }
    

    return 0;
}