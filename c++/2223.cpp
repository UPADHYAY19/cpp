#include <bits/stdc++.h>
using namespace std;
int main() 
{
   
    int n;
    cin>>n;
    int a[n];
    for(int i =1;i<=n;i=i+2)
    {  
       if(i%2==0)
       {
        cin>>a[i];
       }
       else
       {
        cin>>a[-i];
       }
    }
   for(int i =0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
   

    return 0;
}