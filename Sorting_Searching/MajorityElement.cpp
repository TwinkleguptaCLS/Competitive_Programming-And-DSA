#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>v, int size)
{
    int count=0;
    int element=0;
    for(int i=0;i<size;i++)
    {
        if(count==0)
        {
            element = v[i];
        }
        if(element==v[i])
        {
            count++;        
        }
        else
        {
            count--;
        }
    }
    return element;
}
int main()
{
    vector<int>v={1,1,3,4,1,1,1};
    int size= v.size();
    cout<<majorityElement(v,size)<<endl;
}