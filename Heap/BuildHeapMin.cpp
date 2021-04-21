#include<bits/stdc++.h>
using namespace std;

void Heapify(int arr[],int size,int i)
{
    int lt = (2*i)+1;
    int rt = (2*i)+2;
    int smallest = i;
    if(lt<size && arr[lt]<arr[i])
    {
        smallest =lt;
    }
    if(rt<size && arr[rt]<arr[smallest])
    {
        smallest =rt;
    }
    if(smallest!=i)
    {
        swap(arr[i],arr[smallest]);
        Heapify(arr,size,smallest);
    }

}

void BuildHeap(int arr[],int size)
{   
    for(int i =(size-2)/2;i>=0;i--)
    {
        Heapify(arr,size,i);
    }
}

int main()
{
    int arr[] = {10,5,20,2,4,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    BuildHeap(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}