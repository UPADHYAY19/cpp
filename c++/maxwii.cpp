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
	    sort(a,a+n);
	    int sum=0;
	    int maxw =0;
	    for(int i =0;i<n;i++)
	    {  sum = sum+a[i];
	        int p = floor(sum/n);
	        if(p<=a[0])
	        {
	            maxw= max(maxw,sum);
	        }
	    }
     
	    cout<<maxw<<endl;
	    
	}

}
