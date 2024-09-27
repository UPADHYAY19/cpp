#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x == 2)
	    {
	        cout<<y<<endl;
	    }
	    else if(x>(y+1) || y>x)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        cout<<y/2<<endl;
	    }
	}

}
