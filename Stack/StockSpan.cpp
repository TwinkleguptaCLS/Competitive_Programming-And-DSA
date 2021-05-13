#include<bits/stdc++.h>
using namespace std;

void StockSpan(const int a[],int n)
{
    int days;
    for(int i=0;i<n;i++)
    {
        days=0;
        for(int j=i;j>=0;j--)
        {
            if(a[i]>=a[j])
            {
                days++;
            }
            else
            {
                break;
            }
        }
        cout<<days<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    StockSpan(v,n);
}