#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int cnt1=0;
	    int cnt2=0;
	    int total=0;
	   if(a==b) cout<<0<<endl;
	   
	   else if(a>b){
	       cnt1+=ceil(a/2);
	       a=a-cnt1;
	       total+=cnt1;
	       cnt1=0;
	       if(a>b)
	       {
	           
	           cnt1+=ceil(a/2);
	           a=a-cnt1;
	           total+=cnt1;
	           cnt1=0;
	       }
	       else{
	           cnt2+=ceil(b/2);
	           b=b-cnt2;
	           total+=cnt2;
	           cnt2=0;
	       }
	   }
	   else{
	       cnt2+=ceil(b/2);
	       b=b-cnt2;
	       total+=cnt2;
	       cnt2=0;
	       if(b>a)
	       {
	          cnt2+=ceil(b/2);
	          b=b-cnt2;
	          total+=cnt2;
	          cnt2=0;
	       }
	       else{
	           cnt1=ceil(a/2);
	           a=a-cnt1;
	           total+=cnt1;
	           cnt1=0;
	       }
	   }
	   cout<<total<<endl;
	}

}
