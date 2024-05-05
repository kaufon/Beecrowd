#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    while (cin >> n && n != 0)
    {
        int rows = n,cols = n;
        
        vector<vector<int>> matrix(rows,vector<int>(cols));

        int width = trunc(log10(pow(2,n*2)/4))+1;
    
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (j ==0 && i == 0)
                {
                   matrix[i][j] = 1;
                   cout << setw(width) << matrix[i][j];
                }
                else if (j == 0)
                {
                    matrix[i][j] = pow(2,i);
                    cout << setw(width) << matrix[i][j];
                }
                else
                {
                    matrix[i][j] = pow(2,i+j);
                    cout <<" "<<setw(width)<<matrix[i][j];
                }
                
                

            
            }
        cout << endl;
        }
    cout << endl;
    }
    

    return 0;
}
