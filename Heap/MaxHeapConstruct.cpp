#include<bits/stdc++.h>
using namespace std;

class Maxheap
{
    public:
    int *arr;
    int size; 
    int capacity;
    Maxheap(int c)
    {
        size=0;
        capacity=c;
        arr= new int[capacity];
    }
    int left(int i)
    {
        return ((2*i)+1);
    }
    int right(int i)
    {
        return ((2*i)+2);
    }
    int parent(int i)
    {
        return ((i-1)/2);
    }
    void insert(int x)
    {
        if(size==capacity)
        {
            return;
        }
        size++;
        arr[size-1]=x;
        for(int i=size-1; i>=0 && arr[parent(i)]<arr[i];)
        {
            swap(arr[parent(i)],arr[i]);
            i=parent(i);
        }
    }
    void heapify(int i)
    {
        int lt = left(i);
        int rt = right(i);
        int largest=i;
        if(lt<size && arr[lt]>arr[i])
        {
            largest=lt;
        }
        if(rt<size && arr[rt]>arr[largest])
        {
            largest=rt;
        }
        if(largest!=i)
        {
            swap(arr[i],arr[largest]);
            heapify(largest);
        }
    }
    int ExtractMax()
    {
        if(size==0)
        {
            return INT_MIN;
        }
        if(size==1)
        {
            size--;
            return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;
        heapify(0);
        return arr[size];

    }
    void decrease(int i,int x)
    {
        arr[i]=x;
        while(i!=0 && arr[parent(i)]<arr[i])
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    int Delete(int i)
    {
        decrease(i,INT_MAX);
        return ExtractMax();
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Maxheap maxh(10);
    maxh.insert(2);
    maxh.insert(3);
    maxh.display();
    for(int i=7;i>3;i--)
    {
        maxh.insert(i);
        maxh.display();
    }
    cout<<maxh.ExtractMax();
    maxh.display();

    return 0;

}