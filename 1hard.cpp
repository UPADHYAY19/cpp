#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> V(n, vector<int>(m, 0));

        
        
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (i == j)
                        V[i][j] = 3;
                    else
                        V[i][j] = 2;
                }
            }
        
       if (n <m)
        {
            for(int j=n;j<m;j++){
                V[0][j]=3;
            }
                      
        }
        else{
            for(int i=m;i<n;i++){
                V[i][0]=3;
            }
             

        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<V[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}