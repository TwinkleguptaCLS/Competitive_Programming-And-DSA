#include<bits/stdc++.h>
using namespace std;

long countPossiblePaths(int m,int n)
{
    if(m==1 || n==1)
    {
        return 1;
    }

    return countPossiblePaths(m-1,n)+countPossiblePaths(m,n-1);
}

 int countPaths(int n,int m){
    vector<vector<int>>T( n , vector<int> (m, 0));
    for(int i=0; i < n; i++){
        T[i][0] = 1;
    }
    
    for(int i=0; i < m; i++){
        T[0][i] = 1;
    }
    for(int i=1; i < n; i++){
        for(int j=1; j < m; j++){
            T[i][j] = T[i-1][j] + T[i][j-1];
        }
    }
    return T[n-1][m-1];
    }

long long factorial(int N)
{
    if (N <= 1)
    {
        return 1;
    }
    else
    {
        long long result = 1;
        for (int i = 2; i <= N; i++)
        {
            result *= i;
        }
        return result;
    }
}
long long totalPaths(int R, int C)
{
    return factorial(R + C - 2) / (factorial(R - 1) * factorial(C - 1));
}

int main()
{
    cout<<countPossiblePaths(3,3)<<endl;
    cout<<countPaths(3,3)<<endl;
    cout<<totalPaths(3,3);

    return 0;
}