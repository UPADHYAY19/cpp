#include<bits/stdc++.h>
using namespace std;
int slove(int n)
{
     int c =0;
        for(int i=1;i<=n;i++)
        {  
            if(n%i <= n/2)
            {
                c++;
            }
        } 
        return c;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
     int ans = slove(n);
     cout<<ans<<endl;
    }

	return 0;
}
