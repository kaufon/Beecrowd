#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
        for (float i = 0.0; i <=2.2; i = i + 0.2)
        {
            
            
            for (float j = 1; j != 4; j++)
            {
                if (i == 0.0){
                    printf("I=%d J=%d\n",static_cast<int>(i),static_cast<int>(j+i));
                }
                else if (i ==1.0)
                {
                    printf("I=%d J=%d\n",static_cast<int>(i),static_cast<int>(j+i));
                }
                else if (i >= 2.0)
                {
                    printf("I=%d J=%d\n",static_cast<int>(i),static_cast<int>(j+i));
                }
                
                
                else
                {
                    printf("I=%.1f J=%.1f\n",i,j+i);
                }
                
                


            }
            
        }
        
 
    return 0;
}