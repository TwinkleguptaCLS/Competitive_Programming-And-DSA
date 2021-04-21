#include <bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    long long int data;
    TreeNode * left;
    TreeNode * right;
    TreeNode(long long int data) {
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
        TreeNode *create_Node(long long int data)
            {
            TreeNode *newTreeNode = new TreeNode(data);
            return newTreeNode;
            }
        TreeNode *insert_Node(TreeNode *root,long long int data)
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
                TreeNode *curr =q.front();
                q.pop();
                if(curr->left!=NULL)
                    q.push(curr->left);
                else
                {
                    curr->left=create_Node(data);
                    return root;
                }
                if(curr->right!=NULL)
                    q.push(curr->right);
                else
                {
                    curr->right=create_Node(data);
                    return root;
                }
                
            }
            return root;
        }
        void LevelOrderIterative(TreeNode * root)
        {
            if (root == NULL)
                return;
            queue<TreeNode*> Q;
            Q.push(root);
            TreeNode * curr;
            while (!Q.empty()) {
                curr = Q.front(); Q.pop();
                cout << curr->data << " ";
                if (curr->left)
                    Q.push(curr->left);
                if (curr->right)
                    Q.push(curr->right);
            }
        }
        void reverseAlternatelevels(TreeNode* root)
        {
            if(root==NULL)
                return;
            queue<TreeNode*> q;
            q.push(root);
            TreeNode* curr;
            int n, level = 1;
            stack<int> s;
        
            while (!q.empty()) 
            {
                n = q.size();
                while (n--)
                 {
                    curr = q.front();
                    q.pop();
                    if (level % 2) 
                    {
                        if (curr->left) 
                        {
                            q.push(curr->left);
                            s.push(curr->left->data);
                        }
        
                        if (curr->right) 
                        {
                            q.push(curr->right);
                            s.push(curr->right->data);
                        }
                    }
                    else 
                    {
                        curr->data = s.top();
                        s.pop();
        
                        if (curr->left)
                            q.push(curr->left);
                        if (curr->right)
                            q.push(curr->right);
                    }
                }
                level++;
            }
        }
};
int main()
{
    Binary_tree bt;
    TreeNode* root=NULL;
    long long int t;
    long long int data;
    cin>>t;
    while(t--)
    {
        cin>>data;
        root=bt.insert_Node(root,data);
    }
    bt.reverseAlternatelevels(root);
    bt.LevelOrderIterative(root);
    return 0;
}