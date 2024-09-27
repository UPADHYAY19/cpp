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
	    int k;
	    cin>>k;
	    int a[n];
	    for(int i =0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int r; 
	    int s = INT_MAX;
		int count = 0;
	    
	    for(int i =0;i<n;i++)
	    {
	        if(a[i]>=k)
	        {
	            r =a[i]%k;
	            s = min(s,r);
	        }
	        else
	        {
	          count++;
	        }
	    }
		if(count == k)
		{
			s =-1;
		}
		cout<<count<<endl;
	    cout<<s<<endl;
	    
	}

}
