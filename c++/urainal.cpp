#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int count = 0;
	   for(int i=1;i<=n;i++)
	   {
	      count++;
	   }
	   if(count%2==0)
	   {
	         cout<<count/2<<" "<<count/2<<endl;
	   }
	   else
	   {
	         cout<<count/2<<" "<<(count/2)-1<<endl;
	   }
       cout<<count<<endl;
	  
	    
	}

}
