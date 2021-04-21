#include<bits/stdc++.h>
using namespace std;
void sort012(int a[], int n)
{
    int low=0;
    int high = n-1;
    int mid=0;
    while(mid<=high)
    {
       
        switch(a[mid])
        {
            case 0:
                swap(a[low++],a[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid],a[high--]);
                break;
            
        }
    }
}

int main()
{
    int a[]={1,1,0,1,0,2,2,0};
    int n =sizeof(a)/sizeof(a[0]);
    sort012(a,n);
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}