#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={5,15,10,20,8};
    int k=3;
    // priority_queue<int>pq(arr,arr+5);  //using max-heap -O(n+klogn)
    // while(k>0)
    // {
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    //     k--;
    // }

    //using min heap                 
    //1. Build a minheap of k items.
    //2. Traverse from (k+1)th element
    //3. if the element is greater then heap top,remove the top element and push 
         //current element in heap.
         //else ignore 
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr+k);
    for(int i=k;i<5;i++)
    {
        if(arr[i]>pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }


        
    return 0;
}