#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
        int maxc =pow(2,n);
      
        int m =0;
        for(int i=1;i<=n;i++)
        {
            m+=pow(2,i);
            
        }
      
        int minc =0;
        for(int i=1;i<=n-x;i++)
        {
            minc+=pow(2,i);
        }
       
        if(n>x && x>1)  cout<< m-minc<<endl;
	    else if(n>x && x==1) cout<< 2<<endl;
        else cout<<m<<endl;
    }
}
