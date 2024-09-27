class Solution {
public:
    bool isBalanced(TreeNode* root) {
        
    }
    int maxDepth(TreeNode* root)
    {
        if(root == NULL) return 0;
        int left = maxdepth(root->left);
        int right = maxDepth(root->right);
    
    if(left == -1 || right == -1)
    {
        return -1;
    }
    if(abs(left - right)>1) return -1;
    return 1 + max(left,right);
    }
};