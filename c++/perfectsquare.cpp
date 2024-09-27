#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int count = 1;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    cout<<count<<endl;
    if (count == 1)
    {
        if (n % 2 == 0 && n != 2)
        {
            cout<< count / 2;
        }
    }

    else if (count == 2)
    {
        cout<<n;
    }

  
}