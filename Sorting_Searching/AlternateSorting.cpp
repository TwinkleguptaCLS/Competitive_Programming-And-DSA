#include<bits/stdc++.h>
using namespace std;
vector<int> alternateSort(int arr[], int N)  //O(nlogn)
{
    vector<int>res;
    sort(arr,arr+N);
    int low=0;
    int high=N-1;
    while(low<high)
    {
        res.push_back(arr[high]);
        res.push_back(arr[low]);
        high--;
        low++;
    }
    if(low==high)
        res.push_back(arr[low]);
    return res;
}

int main()
{
    int arr[]={3,4,6,1,3,7,8,2};
    int N =sizeof(arr)/sizeof(arr[0]);
    vector<int>res;
    res =alternateSort(arr,N);
    for(auto i:res)
    {
        cout<<i<<" ";
    }
    
    
}