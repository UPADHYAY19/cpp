#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int b[m];
	    for(int i= 0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    
	   sort(a+n-(m+1),a+n);
	    vector<int>ans;                                                                                                                                                                                                                                                                                                                                                                        
	    for(int i =0;i<n;i++)
	    {
	        ans.push_back(a[i]);
	        
	    }
	    for(int i=0;i<ans.size();i++)
	    {
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}

}
