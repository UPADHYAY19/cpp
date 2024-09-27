#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    vector<pair<int,int>>v(16);
	    for(int i=0;i<16;i++)
	    {
	        cin>>v[i].first;
	        v[i].second = i;
	    }
	    sort(v.begin(),v.end());
	    vector<int>count;
	    for(int i=0;i<16;i++)
	    {
	        if(i==0)
	        {
	            count[v[i].second]=0;
	        }
	        else if(i<=2)
	        {
	             count[v[i].second]=1;
	        }
	        else if(i<=6)
	        {
	           count[v[i].second]=2;  
	        }
	        else if(i<=14)
	        {
	             count[v[i].second]=3;
	        }
	        else
	        {
	             count[v[i].second]=4;
	        }
	        for(int i=0;i<16;i++)
	        {
	            cout<<count[i]<" ";
	        }
	        cout<<endl;
	    }
	}

}
