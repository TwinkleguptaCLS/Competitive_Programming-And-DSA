#include<bits/stdc++.h>
using namespace std;
int first_pos(vector<int>&nums,int target)
    {
        int start=0;
        int end =nums.size()-1;
        int first_posi=nums.size();
        while(start<=end)
        {
            int mid= start+(end-start)/2;
            if(nums[mid]>=target)
            {
                first_posi =mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }

            
        }
        return first_posi;
    }
vector<int> searchRange(vector<int>& nums, int target) {
    int first =first_pos(nums,target);
    int last = first_pos(nums,target+1) -1;
    if(first<=last)
    {
        return {first,last};
    }
    else
    {
        return {-1,-1};
    }
        
        
    }

int main()
{
    vector<int>nums ={5,7,7,8,8,9};
    int target=8;
    vector<int>res;
    res = searchRange(nums,target);
    for(auto x:res)
    {
        cout<<x<<" ";
    }
    
    return 0;
}