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
	   int req1 = 0;
	   for(int i =0;i<n;i++)
	   {
	       req1 =req1+a[i]; 
	       
	   }
	   if(req1<=2)
	   {
	       cout<<req1<<endl;
	   }
	   else if(req1%2==0)
	   {
	       cout<<req1/2<<endl;
	   }
	   else
	   {
	        cout<<req1/2 + 1<<endl;
	   }
	  
	}
}
