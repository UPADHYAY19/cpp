
 
class Solution
{
public:
    int maxLevelSum(TreeNode *root)
    {
        vector<double> ans;
        if (root == NULL)
            return 0;
        double sum = 0;
        double avg = 0;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            auto s = q.size();
            vector<int> temp;
            for (int i = 0; i < s; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                if (node->left != NULL)
                {
                    q.push(node->left);
                }
                if (node->right != NULL)
                {
                    q.push(node->right);
                }
                temp.push_back(node->val);
            }

            for (auto it : ans)
                cout << it << ' ';
        }
        return 0;
    }
};