#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float p , l;
        cin>>p>>l;
        float res = l/p*100;
        cout<< res<<endl;
        if(res>=75)
        {
            cout<<"yes"<<endl;

        }
        else{
            cout<<"no"<<endl;
        }
    }
}