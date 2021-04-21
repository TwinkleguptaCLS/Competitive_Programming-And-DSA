class Solution {
public:
    int sum =INT_MIN;
    int maxPathSumHelper(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=max(0,maxPathSumHelper(root->left));
        int r=max(0,maxPathSumHelper(root->right));
        sum=max(sum,l+r+root->val);
        return max(l,r)+root->val;
    }
    int maxPathSum(TreeNode* root) {
         
        maxPathSumHelper(root);
        return sum;
        
    }
};