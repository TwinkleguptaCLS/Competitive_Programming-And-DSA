/* {4,5,1,-3,5,6,-10}

Subarray - > [5,-1,3][6]
Subsequence -> [1,5,-10] ordered but need not to be contiguous
Ever subarray is subsequence but not vice-versa*/

#include<bits/stdc++.h>
using namespace std;

int Maxsum(vector<int>&a) //O(n)
{
    int res= a[0];
    int ms = a[0];
    for(int i=1;i<a.size();i++)
    {
        ms = max(a[i]+ms,a[i]);
        res = max(res,ms);
    }
    return ms;
}
int main()
{
    vector<int>a = {-3,8,-2,4,-3,6};
    cout<<Maxsum(a)<<endl;
}