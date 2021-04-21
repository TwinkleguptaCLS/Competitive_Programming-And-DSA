#include <bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    int data;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int data) {
        this->data = data;
        this->left = this->right = NULL;
    }
    TreeNode() {
        TreeNode(0);
    }
};

class Binary_tree
{
    public:
        TreeNode *create_Node(int data)
            {
            TreeNode *newTreeNode = new TreeNode(data);
            return newTreeNode;
            }
        TreeNode *insert_Node(TreeNode *root,int data)
        {
            if(root==NULL)
            {
                root = create_Node(data);
                return root;
            }
            queue<TreeNode*>q;
            q.push(root);
            while(!q.empty())
            {
                TreeNode *temp =q.front();
                q.pop();
                if(temp->left!=NULL)
                    q.push(temp->left);
                else
                {
                    temp->left=create_Node(data);
                    return root;
                }
                if(temp->right!=NULL)
                    q.push(temp->right);
                else
                {
                    temp->right=create_Node(data);
                    return root;
                }
                
            }
            return root;
        }
        TreeNode *insert(TreeNode * root,int data)
        {
            if(root == NULL)
                return new TreeNode(data);
            else
            {
                if(data<=root->data)
                {
                    root->left=insert(root->left,data);
                    
                }
                else
                {
                    root->right=insert(root->right,data);
                }
                return root;
            }
            
        }
        void preorder_traversal(TreeNode *node)
        {
        if (node == NULL)
            return;
        cout << node->data<< " ";
        preorder_traversal(node->left);
        preorder_traversal(node->right);
        }
};

int main()
{
    Binary_tree bt;
    TreeNode* root=NULL;
    int t;
    int data;
    cin>>t;
    while(t--)
    {
        cin>>data;
        root=bt.insert_Node(root,data);
    }
    bt.preorder_traversal(root);
    return 0;
}