#include<bits/stdc++.h>
using namespace std;
void fun(int i,int sum)  // do paramiter pas kiya 
{
    if(i<1)  // base condition check kiya
    {
        cout<<sum;
        return;
    }
    fun(i-1,sum+i); // function ko call kiya
}
int main()
{
    int n;
    cin>>n;
  
     fun(n,0); // main me function ko call kiya
     
    return 0;

}