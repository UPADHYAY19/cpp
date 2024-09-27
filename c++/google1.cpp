class Solution
{
public:
    int bagOfTokensScore(vector<int> &t, int p)
    {
        int n = t.size();
        int maxs = 0;
        sort(t.begin(), t.end());

        int i = 0;
        int j = n - 1;
        int s = 0;
        while (i <= j)
        {
            if (p >= t[i])
            {
                p = p - t[i];
                s = s + 1;
                i++;
                maxs = max(maxs, s);
            }
            else if (s >= 1)
            {
                p = p + t[i];
                s = s - 1;
                j--;
            }
            else
            {
                return maxs;
            }
        }
        return maxs;
    }
};