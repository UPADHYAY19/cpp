#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
            cin>>a[i];
    }
    int d;
    cin>>d;

    vector<int>temp;
    for(int i =n-d;i<n;i++)
    {
        temp.push_back(a[i]);
    }
    for(int i = n-d;i>=0;i--)
    {
        a[i+d]=a[i];
    }
    for (int i = 0; i < d; i++)
    {
        a[i]=temp[i];
    }
    cout<<"right roted array at d places"<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
    

}