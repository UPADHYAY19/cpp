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
	    for(long long i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    long long ans = 1;
	    for(long long i =0;i<n;i++)
	    {
	        ans*=a[i];
	    }
	    int cnt =0,cnt2=0;
	    for(long long i = 0;i<n;i++)
	    {
	        if(pow(a[i],i)== ans)
	        {
	           
				cnt2++;
	           ;
	        }
	        else
	        {
	            cnt++;
	        }
	    }
		if(cnt2>1)
		{
			cout<<"yes"<<endl;
		}
	    else{
			cout<<"no"<<endl;
		}
	  
	}

}
