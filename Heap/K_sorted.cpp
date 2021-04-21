#include<bits/stdc++.h>
using namespace std;

vector<int> ksorted(int arr[],int n,int k)
{
    vector<int>result;
    priority_queue<int,vector<int>,greater<int>>pq;
    if(k==n)
    {
        for(int i=0;i<k;i++)
        {
            pq.push(arr[i]);
        }
    }
    else
    {
        for(int i=0;i<=k;i++)
        {
            pq.push(arr[i]);
        }
    }
    for(int i=k+1;i<=n;i++)
    {
        result.push_back(pq.top());
        pq.pop();
        pq.push(arr[i]);
    }
    while(pq.empty()==false)
    {
        result.push_back(pq.top());
        pq.pop();
    }
    return result;

}

int main()
{
    int arr[]={6,5,3,2,8,10,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    vector<int>res = ksorted(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
}