#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
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
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'A' || s1[i] == 'I' || s1[i] == 'E' || s1[i] == 'O' || s1[i] == 'U') {
                c++;
            }
        }

        int k = 0;
        for (int i = 0; i < s2.size(); i++) {
            if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u' || s2[i] == 'A' || s2[i] == 'I' || s2[i] == 'E' || s2[i] == 'O' || s2[i] == 'U') {
                k++;
            }
        }

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

int main() {
    string o;
    cin >> o;
    Solution b;
    cout << b.halvesAreAlike(o);
    return 0;
}
