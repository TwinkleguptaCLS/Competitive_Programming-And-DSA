#include<bits/stdc++.h>
using namespace std;


int peakElement(int arr[], int n)
{
   for(int i = 1; i < n; i ++)
        {
            if(arr[i] < arr[i-1])
            {
                return i-1;
            }
        }
        return n-1;
   
}


int main()
{
    int arr[]={1,2,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<peakElement(arr,n)<<endl;
}