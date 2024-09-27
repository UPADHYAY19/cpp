#include<bits/stdc++.h>
using namespace std;
void print(int ind,vector<int>&ds,int s,int sum,int arr[],int n)
{
    if(ind==n)
    {
        if(s == sum)
        {
      for(auto it: ds)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
        }
        
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind]; // hamne current index ko liya ----> taking the current index
    print(ind+1,ds,s,sum,arr,n);
    sum-=arr[ind];  // print fn ko call kiya ind+1 se
    ds.pop_back();   // current ind ke value ko pop kiya 
    print(ind+1,ds,s,sum,arr,n); // agaim call kiya current ko bina liye ----> not taking the current index
}
int main()
{   int s=5;
    int sum =0;
    int arr[]={1,2,3,4,5};
    int n=5;
    vector<int>ds;
    print(0,ds,s,sum,arr,n);
}