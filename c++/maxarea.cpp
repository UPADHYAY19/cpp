#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &h)
    {
        int maxarea = 0;
        int i = 0;
        int j = h.size() - 1;

        while (i < j)
        {
            int hei =min(h[i], h[j]);
            int wei = j - i; 
            maxarea = max(maxarea, wei * hei);

            if (h[i] < h[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        return maxarea;
    }
};
int main()
{
    vector<int>temp = {1,8,6,2,5,4,8,3,7};
    Solution s;
    cout<<s.maxArea(temp)<<endl;
}