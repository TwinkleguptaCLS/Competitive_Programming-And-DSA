#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
    public:
    int *arr;
    int size;
    int capacity;
    MinHeap(int c)
    {
        arr= new int[c];
        size=0;
        capacity=c;
    }
    int left(int i)
    {
        return (2*i+1);
    }
    int right(int i)
    {
        return (2*i+2);
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
        for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];)
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    void heapify(int i)
    {
        int lt = left(i);
        int rt = right(i);
        int smallest=i;
        if(lt<size && arr[lt]<arr[i])
        {
            smallest=lt;
        }
        if(rt<size && arr[rt]<smallest)
        {
            smallest=rt;
        }
        if(smallest!=i)
        {
            swap(arr[i],arr[smallest]);
            heapify(smallest);
        }
    }
    int ExrtactMin()
    {
        if(size==0)
        {
            return INT_MAX;
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
    void Decrease(int i,int x)
    {
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i])
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }

    int Delete(int i)
    {
        Decrease(i,INT_MIN);
        return ExrtactMin();
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int getMin()
    {
        if(size==0)
        {
            return -1;
        }
        else
        {
            return arr[0];
        }

    }

};

int main()
{
    MinHeap mh(10);
    mh.insert(10);
    mh.insert(20);
    mh.display();
    mh.insert(15);
    mh.display();
    mh.Delete(2);
    mh.display();
    mh.insert(40);
    mh.insert(50);
    mh.insert(100);
    mh.insert(25);
    mh.insert(45);
    mh.display();
    mh.insert(12);
    mh.display();
    cout<<mh.ExrtactMin()<<endl;
    mh.display();
}