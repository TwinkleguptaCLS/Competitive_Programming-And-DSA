#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int temp;
    vector<vector<int>>matrix(n,vector<int>(m,0));
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int minr=0;
int maxr=matrix.size();
int minc=0;
int maxc=matrix[0].size();
int te = maxr*maxc;
int cnt=0;
vector<int>res;
while(cnt<te)
{
    for(int i=minc;i<maxc && cnt<te ;i++)
    {
        res.push_back(matrix[minr][i]);
        cnt++;
    }
    minr++;
    for(int i=minr;i<maxr && cnt<te;i++)
    {
        res.push_back(matrix[i][maxc-1]);
        cnt++;
    }
    maxc--;
    for(int i=maxc-1;i>=minc && cnt<te;i--)
    {
        res.push_back(matrix[maxr-1][i]);
        cnt++;
    }
    maxr--;
    for(int i=maxr-1;i>=minr && cnt<te;i--)
    {
        res.push_back(matrix[i][minc]);
        cnt++;
    }
    minc++;
}
for(int i=0;i<res.size();i++)
{
    cout<<res[i]<<" ";
}

}