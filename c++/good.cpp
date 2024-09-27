class Solution {
public:
    string largestGoodInteger(string nums) {
        int n = nums.size();
        for(int i =0;i<=n-3;i++)
        {
            if(nums.substr(i,3)=="999"||nums.substr(i,3)=="888"||nums.substr(i,3)=="777"||nums.substr(i,3)=="666"||nums.substr(i,3)=="555"||nums.substr(i,3)=="444"||nums.substr(i,3)=="333"||nums.substr(i,3)=="222"||nums.substr(i,3)=="111"||nums.substr(i,3)=="000")
            {
                return nums.substr(i,3);
            }
        }
        return "";
    }
};