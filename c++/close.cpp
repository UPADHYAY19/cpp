
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool closeStrings(string w1, string w2)
    {
        int l1 = w1.size();
        int l2 = w2.size();

       
        if (l1 != l2)
        {
            return false;
        }

        vector<int> t1(26, 0); 
        vector<int> t2(26, 0); 

       
        for (char c : w1)
        {
            t1[c - 'a']++;
        }

        
        for (char c : w2)
        {
            t2[c - 'a']++;
        }

       
        for (int i = 0; i < 26; i++)
        {
            if ((t1[i] == 0 && t2[i] != 0) || (t1[i] != 0 && t2[i] == 0))
            {
                return false;
            }
        }

       
        sort(t1.begin(), t1.end());
        sort(t2.begin(), t2.end());

        return t1 == t2;
    }
};

int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    Solution sol;
    cout << sol.closeStrings(s1,s2) << endl; 
  
    return 0;
}
