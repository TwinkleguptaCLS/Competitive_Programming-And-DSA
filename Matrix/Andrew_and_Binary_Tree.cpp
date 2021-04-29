#include<bits/stdc++.h>
using namespace std;

struct Node
{
    long long int data;
    Node *left;
    Node * right;
};

Node* newNode(long long int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left =NULL;
    temp->right =NULL;
    return temp;

}
Node* insert(Node* root, long long int data,queue<Node *>& q)
{
    Node* node = newNode(data);
    if (root == NULL)
        root = node;
 
    else if (q.front()->left == NULL)
        q.front()->left = node;
 
    else {
        q.front()->right = node;
        q.pop();
    }
    q.push(node);
    return root;
}
Node* insertTree(long long int arr[],long long int t)
{
    Node* root =NULL;
    queue<Node*>Q;
    for (long long int i = 0; i < t; i++)
      root = insert(root, arr[i],Q);
    return root;
}
long long int LevelTreenHelper(Node *node,long long int data, long long int level)
{
    if (node == NULL)
        return 0;
 
    if (node -> data == data)
        return level;
 
    long long int downlevel = LevelTreenHelper(node -> left,data, level + 1);
    if (downlevel != 0)
        return downlevel;
 
    downlevel = LevelTreenHelper(node->right,
                             data, level + 1);
    return downlevel;
}
long long int LevelTree(Node *node, long long int data)
{
    return LevelTreenHelper(node, data, 0);
}


int main()
{
    long long int t;
    cin>>t;
    long long int arr[t];
    for(long long int i=0; i<t; i++)
    {
        cin>>arr[i];
    }
    Node* root = insertTree(arr,t);
    long long int x;
    cin>>x;
    cout<<LevelTree(root,x);

    return 0;
    
}