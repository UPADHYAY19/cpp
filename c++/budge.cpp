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
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int c=0;
		int extra =0;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>x)
			{
				c++;
				extra = a[i]-x;
			}
			else if(extra+a[i]>= x)
			{
				c++;
				extra-=x-a[i];
			}
        }
        cout<<c<<endl;
       
	    }
	}
	



