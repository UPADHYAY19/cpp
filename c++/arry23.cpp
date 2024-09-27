#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; i = i + 2)
    {
        if (i % 2 != 1)
        {
            s = s + "-" + to_string(i);
        }
        else
        {
            s = s + to_string(i);
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }
}
