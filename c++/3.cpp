#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b;
     cin>>a>>b;
     int gcd= __gcd(a,b);
     cout<<gcd<<endl;
     vector<int> n = {1,2,3,4,5,6,7,8,9};
     int mx = *max_element(n.begin(), n.end());
     cout<<mx<<endl;
     return 0;
}





