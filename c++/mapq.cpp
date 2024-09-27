#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>mpp;
    for(int i =0;i<n;i++)
    {
        mpp[a[i]]++;
    }
    int q;
cin>>q;
while(q--)
{
    int n;
    cin>>n;
    cout<<n<<"->"<<mpp[n]<<endl;
}

}