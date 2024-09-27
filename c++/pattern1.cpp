#include<bits/stdc++.h>
using namespace std;
void print_p(int n){
    if(n == 0) return;

    print_p(n-1);
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    
}
void print_r(int n)
{
    if(n == 0) return;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    print_r(n-1);
}
int main(){
    int n;
    cin>>n;
    print_p(n);
    cout<<endl;
    cout<<"second part start from here"<<endl;
    print_r(n);
    return 0;

}