#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of element";
    cin>>n;
    int i;
    multiset<int>ms;
    while((n--)!=0&&cin>>i)
    {
       ms.insert(i); 
    }
      for(int  i=0;i<ms.size();i++)
      {
         if(ms.count(i)%2==0)
         {
             ms.count(i+1);
         }
         else
         {
             cout<<i<<endl;
         }
      }
      return 0;
}