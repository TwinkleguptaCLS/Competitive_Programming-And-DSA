#include<bits/stdc++.h>
using namespace std;

long countInversions(const vector<int> &arr)  //O(n^2)
{  
    long count=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
    }
    return count;

}

int main()
{
    vector<int>arr = {2,3,9,5,4,2,1};
    cout<<countInversions(arr);

    return 0;
}