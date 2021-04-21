int height(TreeNode *root,int &d)
{
    if(root == NULL) return -1;
    int lheight = height(root->left);
    int rheight = height(root->right);
    d=max(d,lheight+rheight+2);
    return max(lheight,rheight)+1;
}

int main()
{
    TreeNode*root = new TreeNode();
    int d=0;
    height(root,d);
    cout<<d<<endl;

    return 0;
}