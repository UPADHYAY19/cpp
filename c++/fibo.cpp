#include<bits/stdc++.h>
using namespace std;
int print_fibo(int n)
{
    if(n==0) return  0;
    if(n == 1) {
       return 1;
    }
    return print_fibo(n-1)+(n-2);

}
int main(){
    int n;
    cin>>n;
   cout<< print_fibo(n);

}