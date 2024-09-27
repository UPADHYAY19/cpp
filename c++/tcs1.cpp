#include<bits/stdc++.h>
using namespace std;

int solve(int s, int k){
   
   if(k == 0) return 0;
    if(k == s) return 0;
    int zero = s-k;
    int bloks = k+1;
    int minz = zero/bloks;
    int extraz = zero%bloks;
    if(extraz>0) return minz+1;
    else return minz;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int k;
        cin>>k;
        cout<<solve(s,k)<<endl;
    }
}