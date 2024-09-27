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
	    int count = 0;
	    for(int i =0;i<n;i++)
	    {
	        if(a[i]>i)
	        {
	            count+=a[i]-i;
	        }
	        else
	        {
	            count+=abs(a[i]-i);
	        }
	    }
	    cout<<count<<endl;
	}

}
