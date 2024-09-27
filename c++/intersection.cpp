class Solution
{
public:
    vector<int> intersection(vector<int> &n1, vector<int> &n2)
    {
        vector<int> ans;
        unordered_set<int> st;

        for (auto it : n1)
        {
            st.insert(it);
        }
        for (auto it : n2)
        {
            if (st.find(it) != st.end())
            {
                ans.push_back(it);
            }

            st.erase(it);
        }

        return ans;
    }
};