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
    int n,m;
    cin>>n>>m;
    int b=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        for(int j=1;j<=m;j++)
        {
            cout<<"#";
        }
        }
        else
        {
            if(b==1)
            {
                for(int j=1;j<=m-1;j++)
                {
                    cout<<".";
                }
                cout<<"#";
            }
            else
            {
                cout<<"#";
                for(int j=1;j<=m-1;j++)
                {
                    cout<<".";
                }
            }
            b=1-b;
        }
        
        cout<<endl;
        }
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;
    // cin >> T;
    while (T--)
    {
     solve();
    }
    return 0;
}