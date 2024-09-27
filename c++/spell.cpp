#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int v[n];
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>v[i];
        cin>>a[i];
    }
    int mx=0;
   for(int i =0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        if( i<j)
        mx = max(mx,a[i]*v[j]+v[i]*a[j]);
    }
   }
   cout<<mx<<endl;
    
}
}
