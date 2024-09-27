
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n == k) cout<<"yes"<<endl;
        else if( n%k == 1 && k !=1) cout<<"yes"<<endl;
        else if(n>k && k == 1 ) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}