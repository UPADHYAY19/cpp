#include<bits/stdc++.h>
using namespace std;
int maxOperations(vector<int>& a, int k) {
        int l =a.size();
        int count = 0;
        for(int i = 0;i<l;i++)
        {
            for(int j =i+1;j<l;j++)
            {
                if(a[i]+a[j]== k)
                {
                    count ++;
                    break;
                }
                else if(a[i]+a[j]>= k)
                {
                    i++;
                }else
                {
                    j--;
                }
            }
        }
        return count;
        
}

    int main()
    {
        vector<int>n = {1,2,3,4};
        int m =5;
       int ans = maxOperations(n,m);
       cout<<ans<<endl;
        
    }