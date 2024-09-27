#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin>>n;
    vector<string>st;

    for (int i = 0; i < n; ++i)
    {
        string input;
       cin>>input;
        st.push_back(input);
    }
    cout<<"you have given these string as input"<<endl;
for(auto it: st)
{
    cout<<it<<" ";
}

    return 0;
}
