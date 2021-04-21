#include<bits/stdc++.h>
using namespace std;
void Ksmallest(vector<int>a,int n,int k) // O(NlogK) 
{
    priority_queue<int>maxh;
    for(int i=0;i<n;i++)
    {
        maxh.push(a[i]);
        if(maxh.size()>k)
        {
            maxh.pop();
        }

    }
    while(!maxh.empty())
    {
        cout<<maxh.top()<<" ";
        maxh.pop();
    }
}
int main()
{
    vector<int>a ={1,23,12,9,30,2,50};
    int k=4;
    int n =a.size();
    Ksmallest(a,n,k);
}