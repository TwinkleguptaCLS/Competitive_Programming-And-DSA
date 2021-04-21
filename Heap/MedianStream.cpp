#include<bits/stdc++.h>
using namespace std;

void printMedians(int keys[],int n)
{
    priority_queue<int>max_heap;
    priority_queue<int,vector<int> ,greater<int>>min_heap;
    for(int i=0;i<n;i++)
    {
        if(max_heap.empty())
        {
            max_heap.push(keys[i]);
        }
        else if(max_heap.size()==min_heap.size())
        {
            if(keys[i]<min_heap.top())
            {
                max_heap.push(keys[i]);   
            }
            else{
                min_heap.push(keys[i]);
                max_heap.push(min_heap.top());
                min_heap.pop();
            }
        }
        else if(max_heap.size()>min_heap.size())
        {
            if(keys[i]>max_heap.top())
            {
                min_heap.push(keys[i]);
            }
            else
            {
                max_heap.push(keys[i]);
                min_heap.push(max_heap.top());
                max_heap.pop();
            }
        }
        if(max_heap.size()==min_heap.size())
        {
            cout<<(max_heap.top()+min_heap.top())/2.0<<" ";
        }
        else
        {
            cout<<max_heap.top()<<" ";
        }
    }
}





int main()
{
	int keys[] = { 12, 15, 10, 5, 8, 7, 16};
    
    printMedians(keys,7);
	
	return 0;
}