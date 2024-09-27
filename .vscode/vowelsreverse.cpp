#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        string ans = "";
        string op = "";
        int l = s.size();
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                op += s[i];
            }
        }
        reverse(op.begin(), op.end());

        int j = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                ans += op[j];
                j++;
            }
            else
            {
                ans += s[i];
            }
        }
        return ans;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution a;
    string str = a.reverseVowels(s);
    cout << str << endl;
    return 0;
}
