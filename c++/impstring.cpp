#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>s = {"sanyam","sangam","sonu","sanket"};
    int c = 0;
    for(int i =0;i<s.size();i++)
    {
        for(int j =0;i<s[i].size();j++)
        {
            if(s[i][j]=='s')
            {
                c++;
            }
        }
    }
    return c;
}


