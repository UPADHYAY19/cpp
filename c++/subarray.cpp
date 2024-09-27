#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int maxc=0;
	    int minc=0;
	    int n,l,r;
	    cin>>n>>l>>r;
	    int a[n];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	        
	    }
	    for(int i=1;i<=n;i++)
	    {
	        if( a[i]>=l && a[i]<=r)
	        {
	            maxc++;
	        }
	        else
	        {
	            minc--;
	        }
	    }
	  
	    if( maxc >= abs(minc))
        {
            cout<<maxc+minc<<" "<<minc<<endl;;
        }
        else{
            cout<<0<<" "<<minc+maxc<<endl;;
        }
	    
	}

}
