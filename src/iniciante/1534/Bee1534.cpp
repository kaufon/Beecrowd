#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while (cin >> n)
    {
        int rows = n,cols = n;
        vector<vector<int>> matrix(rows,vector<int>(cols));


        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                
                if (abs(i-j) == 0)
                {
                    matrix[i][j] = 1;
                }
                else if(i + j == n-1)
                {
                    matrix[i][j] = 2;
                }
                else
                {
                    matrix[i][j] = 3;
                }

                if (n % 2 != 0)
                {
                    matrix[n/2][n/2] = 2;
                }
                
                
                
                
                printf("%d",matrix[i][j]);
            }
            cout <<endl;
            
        }
        
    }
    




    return 0;
}