#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int a[n];
for(int i =0;i<n;i++)
{
    cin>>a[i];
}
int hash[n+1]={0};
for(int i =0;i<n;i++)
{
hash[a[i]]++;
}
int q;
cin>>q;
while(q--)
{
    int n;
    cin>>n;
    cout<<n<<"->"<<hash[n]<<endl;
}

    return 0;
}