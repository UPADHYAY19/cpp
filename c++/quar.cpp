#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int y;
    int a;cin>>a;

    int b;cin>>b;
    int c;cin>>c;
    int d;
    d=b*b - 4*a*c;
    if(d>0)
    {
        x = (-b + sqrt(d))/2*a;
        y = (-b - sqrt(d))/2*a;
        cout<<x<<endl;
        cout<<y<<endl;

    }
}