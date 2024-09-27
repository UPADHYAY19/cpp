#include<bits/stdc++.h>
using namespace std;
void mul(int n,int p)
{
    if(n == 0 || n==1)
    {
        cout<<p;
        return ;
    }
    mul(n-1,p*n);
}
int main()
{
    int n;
    cin>>n;
    mul(n,1);

}