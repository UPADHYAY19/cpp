#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    vector<int>a={20,12,25,30,65,1000000000};
    int max= a[0];
    for(int i=1;i<a.size();i++)
    {
        if(a[i]>max) max=a[i];
    }
    cout<<max<<endl;

    return 0;

 }