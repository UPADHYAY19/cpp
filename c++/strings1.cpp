#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int l = s.length();
        string s1 = " ";
        string s2 = " ";

        for (int i = 0; i < l; i++)
        {
            if (i < l / 2)
            {
                s1 = s1 + s[i];
            }
            else
            {
                s2 = s2 + s[i];
            }
            
        }
          
        int c = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'I' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U')
                {
                    c++;
                }
        }
        cout<<c<<endl;
        int k = 0;
        for (int i = 0; i < s2.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'I' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U')
                {
                    k++;
                }
        }
        cout<<k<<endl;
        if (c == k)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{ string o;
cin>>o;
    Solution b;
   cout<< b.halvesAreAlike(o);
}