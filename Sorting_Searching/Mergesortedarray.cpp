#include<bits/stdc++.h>
using namespace std;
vector<int> mergesortedarray(const vector<int>&a,const vector<int>&b,vector<int>&result)
{
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<=b[j])
        {
            result[k++]=a[i++];
        }
        else
        {
            result[k++]=b[j++];
        }
        
    }
    while(i<a.size())
    {
        result[k++]=a[i++];
    }
    while(j<b.size())
    {
        result[k++]=b[j++];
    }
    return result;
}

int main()
{
    vector<int>a = {10,15,20,40};
    vector<int>b = {8,11,15,22,25};
    vector<int>result(a.size()+b.size());
    cout<<result.size()<<endl;
    result = mergesortedarray(a,b,result);
    for(auto x:result)
    {
        cout<<x<<" ";
    }
}