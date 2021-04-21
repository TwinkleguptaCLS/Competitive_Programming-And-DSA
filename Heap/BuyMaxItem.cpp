#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] ={1,12,5,111,20};
    int sum=11;
    int res=0;
    priority_queue<int, vector<int>,greater<int>>pq(arr,arr+5);
    
    while(pq.empty()==false)
    {
        if(sum>=pq.top())
        {
            res++;
            sum-=pq.top();
            pq.pop();
            
        }
        else
        {
        cout<<res<<endl;
        break;
        }
    }
    return 0;

}