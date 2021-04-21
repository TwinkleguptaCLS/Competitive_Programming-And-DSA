#include<bits/stdc++.h>
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
int max_level=-1;
void LeftView(TreeNode * root,int level) 
{
    if(root == NULL)
        return;
    if(max_level<level)
    {
        cout<<root->data << " ";
        max_level=level;
    }
    LeftView(root->left,level+1);
    LeftView(root->right,level+1);

}
int maxlevel=-1;
void RightView(TreeNode * root,int level) 
{
    if(root == NULL)
        return;
    if(maxlevel<level)
    {
        cout<<root->data << " ";
        maxlevel=level;
    }
    RightView(root->right,level+1);
    RightView(root->left,level+1);
    

}
void leftviewiterative(TreeNode *root)
{
    if(root==NULL) return;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        for(int i=1;i<=size;i++)
        {
            TreeNode* curr =q.front();
            q.pop();
            if(i==1)
            {
                cout<<curr->data << " ";
            }
            if(curr->left)
            {
                q.push(curr->left);
            }
            if(curr->right)
            {
                q.push(curr->right);
            }
        }
    }
}
void rightviewiterative(TreeNode* root)
{
    if(root== NULL) return;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        for(int i=1;i<=size;i++)
        {
            TreeNode* curr=q.front();
            q.pop();
            if(i==1)
            {
               cout<< curr->data<<" ";
            }
            if(curr->right)
            {
                q.push(curr->right);
            }
            if(curr->left)
            {
                q.push(curr->left);
            }
        }
    }
}
void topview(TreeNode * root,map<int,pair<int,int>>&m,int dist,int level)
{
    if(root==NULL) return;
    if(m.count(dist)==0|| m[dist].second>level)
    {
        m[dist]= make_pair(root->data,level);
    }
    topview(root->left,m,dist-1,level+1);
    topview(root->right,m,dist+1,level+1);

}

void bottomview(TreeNode * root,map<int,pair<int,int>>&m,int dist,int level)
{
    if(root==NULL) return;
    if(m.count(dist)==0|| m[dist].second<level) //only change of <
    {
        m[dist]= make_pair(root->data,level);
    }
    bottomview(root->left,m,dist-1,level+1);
    bottomview(root->right,m,dist+1,level+1);

}
void top_view(TreeNode *root)
{
    if (root == NULL)
       return;
    queue<pair<TreeNode*,int>> q;
    q.push({root,0});
    map<int,char> m;
    
    while (!q.empty())
    {
        TreeNode* curr = q.front().first;
        int dist = q.front().second;
        q.pop();

        if (m.count(dist) == 0)
            m[dist] = curr->data;

        if (curr->left != NULL)
            q.push({curr->left, dist-1});
        if (curr->right != NULL)
            q.push({curr->right, dist+1});
    }
    for (auto i : m)
        cout << i.second << " ";
}

void bottom_view(TreeNode *root)
{
    if (root == NULL)
       return;
    queue<pair<TreeNode*,int>> q;
    q.push({root,0});
    map<int,char> m;

    while (!q.empty())
    {
        TreeNode* curr = q.front().first;
        int dist = q.front().second;
        q.pop();

        m[dist] = curr->data;

        if (curr->left != NULL)
            q.push({curr->left, dist-1});
        if (curr->right != NULL)
            q.push({curr->right, dist+1});
    }
    for (auto i : m)
        cout << i.second << " ";
}


int main() 
{
    TreeNode * root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->right->left=new TreeNode(4);
    root->right->right=new TreeNode(5);
    root->right->right->left=new TreeNode(6);
    LeftView(root,0);
    cout<<endl;
    leftviewiterative(root);
    cout<<endl;
    rightviewiterative(root);
    cout<<endl;
    RightView(root,0);
    cout<<endl;
    //top view
    map<int,pair<int,int>>m;
    cout<<"Top view of the tree(recursive):";
    topview(root,m,0,0);
    for(auto i:m) cout<<i.second.first<<" ";
    cout<<endl;
    m.clear();
    cout<<"Bottom view of the tree(recursive):";
    bottomview(root,m,0,0);
    for(auto i:m) cout<<i.second.first<<" ";
    cout<<endl;

    return 0;
}