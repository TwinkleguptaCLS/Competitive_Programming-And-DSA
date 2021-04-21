#include <bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    char data;
    TreeNode * left;
    TreeNode * right;
    TreeNode(char data) {
        this->data = data;
        this->left = this->right = NULL;
    }
    TreeNode() {
        TreeNode(0);
    }
};
void inorder_traversal(TreeNode *node)
{
    if (node == NULL)
        return;
    inorder_traversal(node->left);
    cout << node->data << " ";
    inorder_traversal(node->right);
}

void preorder_traversal(TreeNode *node)
{
    if (node == NULL)
        return;
    cout << node->data<< " ";
    preorder_traversal(node->left);
    preorder_traversal(node->right);
}

TreeNode* construct_tree(vector<char>& inorder, vector<char>& preorder)
{
    int preIndex = 0, inIndex = 0, flag = 0;
    stack<TreeNode*> st;

    TreeNode* root = new TreeNode(preorder[preIndex]);
    ++preIndex;
    st.push(root);
    TreeNode *prev = root;

    while (preIndex < preorder.size())
    {
        if (!st.empty() && inorder[inIndex] == st.top()->data)
        {
            prev = st.top();
            st.pop();
            ++inIndex;
            flag = 1;
        }
        else
        {
            TreeNode* node = new TreeNode(preorder[preIndex]);
            if (flag == 0)
            {
                prev->left = node;
                prev = prev->left;
            }
            else
            {
                prev->right = node;
                prev = prev->right;
                flag = 0;
            }
            st.push(node);
            ++preIndex;
        }
    }
    return root;
}

int main()
{
    vector<char> inorder = {'H','D','P','L','A','Z','C','E'};
    vector<char> preorder = {'A','D','H','L','P','Z','C','E'};

    TreeNode* root = construct_tree(inorder, preorder);
    
    cout << "Tree constructed" << endl;
    cout << "Inorder traversal of the constructed tree: ";
    inorder_traversal(root);
    cout << endl;

    cout << "preorder traversal of the constructed tree: ";
    preorder_traversal(root);
    cout << endl;
    return 0;
}