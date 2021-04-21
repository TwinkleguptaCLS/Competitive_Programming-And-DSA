#include<bits/stdc++.h>
using namespace std;
int findminimum(vector<int>&v)
{
    int low= 0;
    int high=v.size()-1;
    while(low<high){
        int mid = low+(high-low)/2;
        if(v[mid]>v[high]){
            low = mid+1;
        }
        else
        {
            high = mid;
        }
    }
    return high;
}
int Binary_search(vector<int>&v,int low,int high,int k)
{
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(v[mid]==k)
        {
            return mid;
        }
        else if(k>v[mid]){
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     int x;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;
    int findmin = findminimum(v);
    int low =0; int high =n-1;
    int res1 = Binary_search(v,low,findmin-1,k);
    int res2 = Binary_search(v,findmin,high,k);
    
    if(res1<0)
    {
        cout<<res2<<"\n";
    }
    else
    {
        cout<<res1<<"\n";
    }
    
    }
    return 0;
}