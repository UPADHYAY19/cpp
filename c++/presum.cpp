#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>temp={1,2,3,4,5};
    vector<float>av(6);
    av[0]=0;
    for(int i=1;i<=5;i++)
    {
        av[i]=av[i-1]+temp[i-1];
        av[i]=av[i]/float(i);
    }
    for(auto it: av) cout<<it<<" ";
   
       return 0;
}