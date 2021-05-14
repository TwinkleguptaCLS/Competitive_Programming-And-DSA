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
    string a,b,c;
    cin>>a>>b>>c;
    if(a.length()+b.length()!=c.length())
    {
        cout<<"NO";
        return;
    }
    a=a+b;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    if(a.find(c)==string::npos)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
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