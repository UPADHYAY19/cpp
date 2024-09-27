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
    int x;
    cin>>x;
    string s;
    cin>>s;
    if(s[0]== '0')
    {
        cout<<"no"<<endl;
    }
    
    for(int i =1;i<n;i++)
    {
        if(s[i]== '0')
        {
         count++;
         
        }
        else
        {
            
        }
    }
    cout<<x<<endl;
   if(x>0)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}
}
