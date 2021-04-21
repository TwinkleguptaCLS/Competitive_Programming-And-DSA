#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};
Node *create_node(int data)
{
    Node *newnode = new Node();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
Node *insert_node(Node *root,int data)
{
    if(root==NULL)
    {
        root = create_node(data);
        return root;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node *temp =q.front();
        q.pop();
        if(temp->left!=NULL)
            q.push(temp->left);
        else
        {
            temp->left=create_node(data);
            return root;
        }
        if(temp->right!=NULL)
            q.push(temp->right);
        else
        {
            temp->right=create_node(data);
            return root;
        }
        
    }
    return root;
}
void inorder(Node *temp)
{
    if(temp ==NULL)
        return;
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}

void deletedeepest(Node *root,Node *d_node)
{
    queue<Node*>q;
    q.push(root);
    Node *temp;
    while (!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp==d_node)
        {
            temp=NULL;
            delete(d_node);
            return;
        }
        if(temp->right==d_node)
        {
            temp->right=NULL;
            delete(d_node);
            return;
        }
        else
        {
            q.push(temp->right);
        }
        if(temp->left==d_node)
        {
            temp->left=NULL;
            delete(d_node);
            return;
        }
        else
        {
            q.push(temp->left);
        }
        
    }
    
}
Node *delete_node(Node* root,int key)
{
    if(root==NULL)
        return NULL;
    if(root->left==NULL && root->right==NULL)
        {
            if(root->data=key)
                return NULL;
            else
            {
                return root;
            }
        }
    queue<Node*>q;
    Node *temp;
    Node * key_node =NULL;
    q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp->data==key)
        {
            key_node=temp;
        }
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    if(key_node!=NULL)
    {
        int x=temp->data;
        deletedeepest(root,temp);
        key_node->data=x;
    }
    return root;


}
int main()
{
    Node* root = create_node(10);
    root->left= create_node(11);
    root->right=create_node(9);
    root->left->left = create_node(7);
    root->right->left = create_node(15);
    root->right->right= create_node(8);
    cout<<"Inorder traversal before deletion:\n";
    inorder(root);
    cout<<endl;
    int key =11;
    //root=insert_node(root,key);
    root = delete_node(root,key);
    inorder(root);
    return 0;
}