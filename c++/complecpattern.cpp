#include<bits/stdc++.h>
using namespace std;
void print_p(int n){
    if(n == 1){
        cout<<"1"<<endl;
        return ;
    }
    for(int i=1;i<=n;i++){
         cout<<i<<" ";
    }
    cout<<endl;
    print_p(n-1);
    for(int i=1;i<=n;i++){
         cout<<i<<" ";
    }
    cout<<endl;

}

int main(){
    int n;
    cin>>n;
    print_p(n);
   
}