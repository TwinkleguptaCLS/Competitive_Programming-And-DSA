// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int temp;
//     vector<vector<int>>matrix(n,vector<int>(m,0));
//     for(int i=0;i<matrix.size();i++)
//     {
//         for(int j=0;j<matrix[i].size();j++)
//         {
//             cin>>matrix[i][j];
//         }
//     }
//     for(int i=0;i<matrix.size();i++)
//     {
//         for(int j=0;j<matrix[i].size();j++)
//         {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     int minr=0;
// int maxr=matrix.size();
// int minc=0;
// int maxc=matrix[0].size();
// int te = maxr*maxc;
// int cnt=0;
// vector<int>res;
// while(cnt<te)
// {
//     for(int i=minc;i<maxc && cnt<te ;i++)
//     {
//         res.push_back(matrix[minr][i]);
//         cnt++;
//     }
//     minr++;
//     for(int i=minr;i<maxr && cnt<te;i++)
//     {
//         res.push_back(matrix[i][maxc-1]);
//         cnt++;
//     }
//     maxc--;
//     for(int i=maxc-1;i>=minc && cnt<te;i--)
//     {
//         res.push_back(matrix[maxr-1][i]);
//         cnt++;
//     }
//     maxr--;
//     for(int i=maxr-1;i>=minr && cnt<te;i--)
//     {
//         res.push_back(matrix[i][minc]);
//         cnt++;
//     }
//     minc++;
// }
// for(int i=0;i<res.size();i++)
// {
//     cout<<res[i]<<" ";
// }
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int row_start =0;
    int row_end = n-1;
    int column_start = 0;
    int column_end = m-1;
    while(row_start<=row_end && column_start<=column_end)
    {
        //first we traverse the row_start from column_start to column end
        for(int col=column_start;col<=column_end;col++)
        {
            cout<<a[row_start][col]<<" ";
        }
        row_start++;
        //we traverse the column_end from row_start to row_end
        for(int row = row_start;row<=row_end;row++)
        {
            cout<<a[row][column_end]<<" ";
        }
        column_end--;
        //we traverse the row_end from column_end to column start
        for(int col = column_end;col>=column_start;col--)
        {
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        //we traverse the column_start from row_end to row_start
        for(int row=row_end;row>=row_start;row--)
        {
            cout<<a[row][column_start]<<" ";
        }
        column_start++;
    }
  return 0;
}
