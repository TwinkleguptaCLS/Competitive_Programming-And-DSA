#include<bits/stdc++.h>
using namespace std;

bool checksorted(int a[], int n)
{
    if(n==1)
    {
        return true;
    }
    return (a[n-1]>=a[n-2] && checksorted(a,n-1));
}

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
    checksorted(a,n)?cout<<"Sorted":cout<<"Not Sorted";

  return 0;
}