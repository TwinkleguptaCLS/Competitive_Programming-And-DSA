#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=0)
        {
            a[i] += a[i-1];
        }
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<"l= "<<l<<"r= "<<r<<endl;
        if(l==0)
        {
            cout<<"Prefix Sum: "<<a[r];
        }
        else
        {
            cout<<"Prefix Sum: "<<a[r]- a[l-1];
        }
        cout<<endl;
    }
    return 0;
}
