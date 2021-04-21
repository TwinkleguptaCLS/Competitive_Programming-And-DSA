#include<bits/stdc++.h>
using namespace std;

/*int TotalWater(vector<int>&a) //O(n^2)
{
    int res=0; //total water;
    for(int i=1;i<a.size()-1;i++)
    {
        int lmax=a[i];
        for(int j=0;j<i;j++)
        {
            lmax=max(lmax,a[j]);
        }
        int rmax=a[i];
        for(int j=i+1;j<a.size();j++){
            rmax=max(rmax,a[j]);
        }
        res+= min(lmax,rmax)-a[i];


    }
    return res;
}*/

//optimized approach - O(n) time & O(n) space
/*int TotalWater(vector<int>&a) 
{
    int left[a.size()],right[a.size()];
    left[0]=a[0];
    for(int i=1;i<a.size();i++)
    {
        left[i]=max(left[i-1],a[i]);
    }
    right[a.size()-1]=a[a.size()-1];
    for(int i=a.size()-2;i>=0;i--)
    {
        right[i]=max(a[i],right[i+1]);
    }
    int res=0;
    for(int i=1;i<a.size()-1;i++)
    {
        res+= min(left[i],right[i])-a[i];
    }
    return res;

}*/
// Baam! one more approach -O(n) time O(1) space
int TotalWater(vector<int>&height)
{
   int n = (int)height.size();
    if(n <= 2) return 0;
    int res = 0;
    int leftBar = height[0], rightBar = height[n-1];
    int l = 0, r = n-1;
    while(l <r){
        if(leftBar <= rightBar){
            l++;
            if(height[l] >= leftBar){
                leftBar = height[l];
            }
            else{
                res += leftBar - height[l];
            }
        }
        else{
            r--;
            if(height[r] >= rightBar){
                rightBar = height[r];
            }
            else{
                res += rightBar - height[r];
            }
        }
    }
    return res;
}

int main()
{
    vector<int>a={1,0,2,1,0,1,3,2,1,2,1};
    cout<<TotalWater(a);

}