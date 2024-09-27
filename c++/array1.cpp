#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int b[n] = {0};
    
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j < n; j++)
        {     
            if (a[i] == a[j])
            {  
                b [i] = b[i]+1;
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        if  (b[i]>1)
        cout<<a[i]<<"comes"<<b[i]<<" times"<<endl;;
    }

    return 0;
}  