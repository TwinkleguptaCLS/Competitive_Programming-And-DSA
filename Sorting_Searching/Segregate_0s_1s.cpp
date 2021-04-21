#include<bits/stdc++.h>
using namespace std;

void binSort(int A[], int N)
{
   int low=0;
   int high = N-1;
   while(low<=high)
   {
        if(A[low]==1)
        {
            swap(A[low],A[high--]);
        }
        else
        {
            low++;
        }
   }
}
int main()
{
    int A[]={1,1,0,0,0,1,1,1,0,0};
    int N =sizeof(A)/sizeof(A[0]);
    binSort(A,N);
    for(auto i:A)
    {
        cout <<i<<" ";
    }
    cout<<endl;
    return 0;
}