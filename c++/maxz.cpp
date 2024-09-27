#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin.ignore();
        getline(cin, s);
        int count = 0;
        int maxz=0;
        for(int i =0;i<n;i++)
        {
            if(s[i]=='0')
            {
                count++;
            }
            else
            {
                maxz = max(maxz,count);
                count=0;
            }
        }
    
     int count2=0;
     for(int i =0;i<n;i++)
     {
        if(s[i]=='1')
        {
            count2++;
        }
     }
     int res = count2+max(count,maxz);
     cout<<res<<endl;
}
}