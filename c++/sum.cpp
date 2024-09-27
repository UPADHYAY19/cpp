#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxi=0;
        int sum=0;
        int i=0,j=0;
        while(j<n){
            sum+=a[j];
            while(i<=j && sum>k){
                sum-=a[i];
                i++;
            }
            if(sum == k) maxi = max(maxi,j-i+1); 
            
            j++;
        }
        cout<< maxi;
    }
}