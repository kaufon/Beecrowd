#include <bits/stdc++.h>

using namespace std;

int main(){
    float x,y;
    scanf("%f %f",&x,&y);
    if (x == 0 && y ==0)
    {
        cout << "Origem" <<endl;
    }
    else if (x == 0 && y !=0)
    {
        cout << "Eixo Y"<<endl;
    }
    else if (x != 0 && y ==0)
    {
        cout << "Eixo X" <<endl;
    }
    else
    {
        if (x > 0 && y > 0)
        {
            printf("Q1\n");
        }
        else if (x > 0 && y < 0)
        {
            printf("Q4\n");
        }
        else if (x < 0 && y > 0)
        {
            printf("Q2\n");
        }
        else
        {
            cout << "Q3"<<endl;
        }
        
        
        
        
    }
    
    
    
    





    return 0;
}