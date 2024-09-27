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
	    int a[n];
	    for(int i =0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int count = 0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j =i;j<n;i++)
	        {
	            for(int k =i;k<j;i++)
	            {
	                if(a[k]&a[k+1]==a[k]^a[k+1])
	                {
	                    count++;
	                }
	            }
	        }
	    }
	    cout<<count<<endl;
	    
	}

}
