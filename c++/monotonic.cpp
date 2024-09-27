class Solution {
public:
    string removeKdigits(string num, int k) {
        string op="";
        int n = num.length();
        for(int i =0;i<n;i++)
        {
            while(op.length()>0 && op.back()>num[i]&& k>0)
            {
                op.pop_back();
                k--;
            }
            if(op.length()>0 || num[i]!='0')
            {
                op.push_back(num[i]);
            }
        }
        while(op.length()>0 && k>0)
        {
            op.pop_back();
            k--;
        }
        if(op == "")
        {
            return 0;
        }
        return op;
        
    }
};
