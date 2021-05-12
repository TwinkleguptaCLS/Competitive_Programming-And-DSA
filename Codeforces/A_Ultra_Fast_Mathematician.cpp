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

void solve()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==b[i])
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
        
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;
}