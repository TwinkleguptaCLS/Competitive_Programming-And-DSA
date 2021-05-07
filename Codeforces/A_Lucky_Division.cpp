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

bool Lucky(int n)
{
    while(n)
    {
        int x=n%10;
        n/=10;
        if(x==7 || x==4)
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    if(Lucky(n))
    {
        cout<<"YES";
        return;
    }
    for(int i=4;i<=n;i++)
    {
        if(Lucky(i))
        {
            if(n%i==0)
            {
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     solve();
    return 0;
}