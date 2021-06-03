#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[1001][1001];
    
    bool helper(string s1,string s2,string s3,int n,int m,int len)
    {
        if(len==0)
            return true;
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        bool a=false,b=false;
        if(n-1>=0 && s1[n-1]==s3[len-1])
        {
            a = helper(s1,s2,s3,n-1,m,len-1);
        }
        if(m-1>=0 && s2[m-1]==s3[len-1])
        {
            b = helper(s1,s2,s3,n,m-1,len-1);
        }
        return dp[n][m] = a || b;
        
    }
    bool isInterleave(string s1, string s2, string s3) {
        //this is recursion which won't work for larger input cz time complexity 2^(m+n) 
        /*if(s1.empty() && s2.empty() && s3.empty())
        {
            return true;
        }
        if(s1.length()+s2.length()!=s3.length())
        {
            return false;
        }
        bool res = false;
        if(s1.length()>0 && s1[0]==s3[0])
        {
            res = isInterleave(s1.substr(1),s2,s3.substr(1));
        }
        bool res2=false;
         if(res==false && s2.length()>0 && s2[0]==s3[0])
        {
            res2 = isInterleave(s1,s2.substr(1),s3.substr(1));
        }
        return res||res2;*/
        int n = s1.length();
        int m= s2.length();
        int len = s3.length();
        if(n+m!=len)
        {
            return false;
        }
        dp[n][m];
        memset(dp,-1,sizeof(dp));
        return helper(s1,s2,s3,n,m,len);
        
    }
};