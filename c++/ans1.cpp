#include <bits/stdc++.h>
using namespace std;

int main() {
	
int t;
cin>>t;
while(t--)
{
    int n,x;
    cin>>n>>x;
    int s[n];
    for(int i =0;i<n;i++)
    {
        cin>>s[i];
    }
    int count = 0;
    for(int i =0;i<n;i++)
    {
        if(s[i] == 0)
        {
            count++;
            break;
        }
    }
    if(count== 1)
    {
        cout<<"no"<<endl;
    }
    else
    {
        cout<<"yes"<<endl;
    }
    
}
}
