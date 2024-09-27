#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& v) {
        int l = v.size();
    int i = 0;
    int j = l - 1;
    int count = 0;
    
    while (j >= 0)
    {
        if (v[i] == v[j])
        {
            count++;
        }
        else if (v[i] > v[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return count;
    }
};

int main()
{  Solution s;

    vector<int>v ={1,2,3,1,1,3};
    cout<<s.numIdenticalPairs(v);
    
    return 0;
}