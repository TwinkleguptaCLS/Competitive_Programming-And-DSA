#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 10e9 + 7
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORL(i, b, n) for (int (i) = (b); (i) <= (n); (i)++)
#define FORR(i, b, n) for (int (i) = (b); (i) >= (n); (i)--)
#define INF 1000000000000000003
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int a[4];
    // for(int i=0;i<4;i++)
    // {
    //     cin>>a[i];

    // }
    // sort(a,a+4);
    // int count=0;
    // for(int i=1;i<4;i++)
    // {
    //     if(a[i-1]==a[i])
    //     {
    //         count++;
    //     }
    // }
    // cout<<count;
    set<int>s;
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        s.insert(x);

    }
    cout<<4-s.size();
    return 0;
}