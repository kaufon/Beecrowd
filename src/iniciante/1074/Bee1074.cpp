#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,number;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> number;
        if (number % 2 == 0 && number !=0)
        {
            if (number > 0)
            {
                cout << "EVEN POSITIVE" <<endl;
            }
            else
            {
                cout << "EVEN NEGATIVE"<<endl;                
            }
            
        }
        else if (number == 0)
        {
            cout << "NULL" <<endl;
        }
        
        else
        {
            if (number > 0)
            {
                cout << "ODD POSITIVE" <<endl;
            }
            else
            {
                cout << "ODD NEGATIVE"<<endl;                
            }
        }
        
        
    }
    




    return 0;
}